/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jharrach <jharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 16:25:24 by jan-arvid         #+#    #+#             */
/*   Updated: 2023/01/10 14:09:40 by jharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

void	perspective(t_fdf *fdf, t_line3 *l, int8_t *b, const float r[3][3])
{
	vec_copy(&l[2].a, &l[0].a);
	vec_copy(&l[2].b, &l[0].b);
	vec_mul(&l[2].a, &fdf->s);
	vec_mul(&l[2].b, &fdf->s);
	multiply_matrix3x3(&l[2].a, &l[1].a, r);
	multiply_matrix3x3(&l[2].b, &l[1].b, r);
	vec_add(&l[1].a, &fdf->t);
	vec_add(&l[1].b, &fdf->t);
	*b = clip_line(&l[1].a, &l[1].b, \
	(t_vec3){l[1].a.z, l[1].b.z, fdf->near});
	if (*b)
	{
		multiply_matrix4x4(&l[1].a, &l[2].a, fdf->proj);
		multiply_matrix4x4(&l[1].b, &l[2].b, fdf->proj);
		l[2].a.x += 1;
		l[2].a.y += 1;
		l[2].b.x += 1;
		l[2].b.y += 1;
		l[2].a.x *= fdf->hwidth;
		l[2].a.y *= fdf->hheight;
		l[2].b.x *= fdf->hwidth;
		l[2].b.y *= fdf->hheight;
		*b = clip_for_win(&l[2]);
	}
}

void	paralell(t_fdf *fdf, t_line3 *l, int8_t *b, const float r[3][3])
{
	vec_copy(&l[1].a, &l[0].a);
	vec_copy(&l[1].b, &l[0].b);
	vec_mul(&l[1].a, &fdf->s);
	vec_mul(&l[1].b, &fdf->s);
	multiply_matrix3x3(&l[1].a, &l[2].a, r);
	multiply_matrix3x3(&l[1].b, &l[2].b, r);
	vec_add(&l[2].a, &fdf->t);
	vec_add(&l[2].b, &fdf->t);
	l[2].a.x += fdf->hwidth;
	l[2].a.y += fdf->hheight;
	l[2].b.x += fdf->hwidth;
	l[2].b.y += fdf->hheight;
	*b = clip_for_win(&l[2]);
}

void	transform(t_fdf *fdf)
{
	const float	rotation[3][3] = {{cosf(fdf->a.y) * cosf(fdf->a.z), \
	cosf(fdf->a.y) * -sinf(fdf->a.z), -sinf(fdf->a.y)}, {sinf(fdf->a.x) * \
	sinf(fdf->a.y) * cosf(fdf->a.z) + cosf(fdf->a.x) * sinf(fdf->a.z), \
	-sin(fdf->a.x) * sin(fdf->a.y) * sinf(fdf->a.z) + cosf(fdf->a.x) * \
	cosf(fdf->a.z), sinf(fdf->a.x) * cosf(fdf->a.y)}, {-sinf(fdf->a.x) * \
	sinf(fdf->a.z) + cosf(fdf->a.x) * sinf(fdf->a.y) * cosf(fdf->a.z), \
	-cosf(fdf->a.x) * sinf(fdf->a.y) * sinf(fdf->a.z) - sinf(fdf->a.x) * \
	cosf(fdf->a.z), cosf(fdf->a.x) * cosf(fdf->a.y)}};
	int64_t		i;

	i = 0;
	while (i < fdf->lines)
	{
		if (fdf->type)
			paralell(fdf, fdf->line[i], &fdf->line_b[i], rotation);
		else
			perspective(fdf, fdf->line[i], &fdf->line_b[i], rotation);
		i++;
	}
}

void	hook(void *param)
{
	t_fdf			*fdf;
	double			time;

	fdf = param;
	time = mlx_get_time();
	fdf->delta_time = time - fdf->time;
	fdf->time = time;
	if (mlx_is_key_down(fdf->mlx, MLX_KEY_ESCAPE))
		mlx_close_window(fdf->mlx);
	fdf->shift = mlx_is_key_down(fdf->mlx, MLX_KEY_LEFT_SHIFT);
	keys_translation(fdf);
	keys_rotation(fdf);
	keys_scalling(fdf);
	transform(fdf);
	draw(fdf);
}

int32_t	main(int argc, char **argv)
{
	t_fdf	fdf;

	get_fdf(&fdf, argc, argv);
	set_center(&fdf);
	init_fdf(&fdf);
	free_fdf(&fdf);
	fdf.mlx = mlx_init(WIDTH, HEIGHT, argv[1], false);
	if (!fdf.mlx)
		mlx_error(&fdf);
	fdf.win = mlx_new_image(fdf.mlx, fdf.mlx->width, fdf.mlx->height);
	if (!fdf.win)
		mlx_error(&fdf);
	mlx_image_to_window(fdf.mlx, fdf.win, 0, 0);
	mlx_scroll_hook(fdf.mlx, &scroll, &fdf);
	mlx_key_hook(fdf.mlx, &keys, &fdf);
	mlx_loop_hook(fdf.mlx, &hook, &fdf);
	print_keys();
	mlx_loop(fdf.mlx);
	terminate_fdf(&fdf);
	mlx_terminate(fdf.mlx);
	return (EXIT_SUCCESS);
}
