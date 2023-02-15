/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_fdf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jharrach <jharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 08:05:31 by jharrach          #+#    #+#             */
/*   Updated: 2023/01/10 17:40:11 by jharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

void	reset(t_fdf *fdf)
{
	float	aspect_ratio;

	aspect_ratio = (float)HEIGHT / (float)WIDTH;
	fdf->proj[0][0] = aspect_ratio * fdf->fov;
	fdf->proj[1][1] = fdf->fov;
	fdf->proj[2][2] = fdf->far / (fdf->far - fdf->near);
	fdf->proj[3][2] = (-fdf->far * fdf->near) / (fdf->far - fdf->near);
	fdf->proj[2][3] = 1.0f;
	fdf->proj[3][3] = 0.0f;
	fdf->a = (t_vec3){PI / 2.0f - asinf(tanf(PI / 6.0f)), 0.0f, PI / -4.0f};
	fdf->t = (t_vec3){0.0f, 0.0f, 360.0 * atanf((36.0f / fdf->scale))};
	fdf->s = (t_vec3){fdf->scale, fdf->scale, fdf->scale};
}

static void	init_table(t_fdf *fdf)
{
	fdf->lines = (fdf->cols - 1) * fdf->rows + (fdf->rows - 1) * fdf->cols;
	fdf->line = malloc(sizeof(t_line3 *) * fdf->lines);
	if (!fdf->line)
	{
		free_fdf(fdf);
		ft_printf("\033[0;91merror:\033[0;39m Allocation failed\n");
		exit(EXIT_FAILURE);
	}
	fdf->line_b = malloc(sizeof(int8_t) * fdf->lines);
	if (!fdf->line_b)
	{
		free(fdf->line);
		free_fdf(fdf);
		ft_printf("\033[0;91merror:\033[0;39m Allocation failed\n");
		exit(EXIT_FAILURE);
	}
	init_lines(fdf, (t_vec2){fdf->cols - 1, fdf->rows}, \
	(t_vec2){1, 0}, fdf->line);
	init_lines(fdf, (t_vec2){fdf->cols, fdf->rows - 1}, \
	(t_vec2){0, 1}, &fdf->line[(fdf->cols - 1) * fdf->rows]);
}

static void	scale(t_fdf *fdf)
{
	const float	rotation[3][3] = {\
	{cosf(fdf->a.z), -sinf(fdf->a.z), 0}, {cosf(fdf->a.x) * \
	sinf(fdf->a.z), cosf(fdf->a.x) * cosf(fdf->a.z), sinf(fdf->a.x)}, \
	{-sinf(fdf->a.x) * sinf(fdf->a.z), -sinf(fdf->a.x) * cosf(fdf->a.z), \
	cosf(fdf->a.x)}};
	int32_t		i;
	float		max_x;
	float		max_y;

	max_x = __FLT_MIN__;
	max_y = __FLT_MIN__;
	i = 0;
	while (i < fdf->lines)
	{
		multiply_matrix3x3(&fdf->line[i][0].a, &fdf->line[i][1].a, rotation);
		if (fabsf(fdf->line[i][1].a.x) > max_x)
			max_x = fabsf(fdf->line[i][1].a.x);
		if (fabsf(fdf->line[i][1].a.y) > max_y)
			max_y = fabsf(fdf->line[i][1].a.y);
		i++;
	}
	if (max_x / fdf->hwidth > max_y / fdf->hheight)
		fdf->scale = (fdf->hwidth * 9.0) / (10.0 * max_x);
	else
		fdf->scale = (fdf->hheight * 9.0) / (10.0 * max_y);
}

void	init_fdf(t_fdf *fdf)
{
	fdf->type = 1;
	fdf->col = WHITE;
	fdf->time = mlx_get_time();
	fdf->hwidth = (float)WIDTH / 2.0f;
	fdf->hheight = (float)HEIGHT / 2.0f;
	ft_memset(fdf->proj, 0, sizeof(fdf->proj));
	init_table(fdf);
	fdf->near = 0.1f;
	fdf->far = 1000.0f;
	fdf->fov = 1.0f / tanf(PI / 4.0f);
	fdf->a = (t_vec3){PI / 2.0f - asinf(tanf(PI / 6.0f)), 0.0f, PI / -4.0f};
	scale(fdf);
	reset(fdf);
}
