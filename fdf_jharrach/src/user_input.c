/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   user_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jharrach <jharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 23:21:14 by jharrach          #+#    #+#             */
/*   Updated: 2023/01/10 17:38:02 by jharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

void	keys_translation(t_fdf *fdf)
{
	const float	delta = fdf->delta_time * (100.0f + 1000.0f * fdf->shift);

	if (mlx_is_key_down(fdf->mlx, MLX_KEY_LEFT))
		fdf->t.x -= delta;
	if (mlx_is_key_down(fdf->mlx, MLX_KEY_RIGHT))
		fdf->t.x += delta;
	if (mlx_is_key_down(fdf->mlx, MLX_KEY_UP))
		fdf->t.y -= delta;
	if (mlx_is_key_down(fdf->mlx, MLX_KEY_DOWN))
		fdf->t.y += delta;
	if (mlx_is_key_down(fdf->mlx, MLX_KEY_F))
		fdf->t.z += delta;
	if (mlx_is_key_down(fdf->mlx, MLX_KEY_G))
		fdf->t.z -= delta;
}

void	keys_rotation(t_fdf *fdf)
{
	const float	delta = fdf->delta_time * (0.1f + 1.0f * fdf->shift);

	if (mlx_is_key_down(fdf->mlx, MLX_KEY_S))
		fdf->a.x -= delta;
	if (mlx_is_key_down(fdf->mlx, MLX_KEY_W))
		fdf->a.x += delta;
	if (mlx_is_key_down(fdf->mlx, MLX_KEY_A))
		fdf->a.y -= delta;
	if (mlx_is_key_down(fdf->mlx, MLX_KEY_D))
		fdf->a.y += delta;
	if (mlx_is_key_down(fdf->mlx, MLX_KEY_E))
		fdf->a.z -= delta;
	if (mlx_is_key_down(fdf->mlx, MLX_KEY_Q))
		fdf->a.z += delta;
}

void	keys_scalling(t_fdf *fdf)
{
	const float		delta = fdf->delta_time * (1.0f + 10.0f * fdf->shift);
	t_vec3			d;

	d.x = delta;
	d.y = delta;
	d.z = delta;
	if (mlx_is_key_down(fdf->mlx, MLX_KEY_C))
		vec_add(&fdf->s, &d);
	if (mlx_is_key_down(fdf->mlx, MLX_KEY_V))
		vec_sub(&fdf->s, &d);
	if (mlx_is_key_down(fdf->mlx, MLX_KEY_J))
		fdf->s.x += delta;
	if (mlx_is_key_down(fdf->mlx, MLX_KEY_L))
		fdf->s.x -= delta;
	if (mlx_is_key_down(fdf->mlx, MLX_KEY_I))
		fdf->s.y += delta;
	if (mlx_is_key_down(fdf->mlx, MLX_KEY_K))
		fdf->s.y -= delta;
	if (mlx_is_key_down(fdf->mlx, MLX_KEY_U))
		fdf->s.z += delta;
	if (mlx_is_key_down(fdf->mlx, MLX_KEY_O))
		fdf->s.z -= delta;
}

void	scroll(double xdelta, double ydelta, void *param)
{
	t_fdf *const	fdf = param;

	fdf->t.z += ydelta * 0.1;
	ydelta = xdelta;
}

void	keys(mlx_key_data_t keydata, void *param)
{
	t_fdf *const	fdf = param;

	if (keydata.key == MLX_KEY_R && keydata.action == MLX_RELEASE)
		reset(fdf);
	if (keydata.key == MLX_KEY_T && keydata.action == MLX_RELEASE)
		fdf->type = !fdf->type;
}
