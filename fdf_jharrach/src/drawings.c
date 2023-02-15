/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawings.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jharrach <jharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:42:41 by jan-arvid         #+#    #+#             */
/*   Updated: 2023/01/07 23:32:05 by jharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

static void	draw_pixel(mlx_image_t *img, t_vec2 p, uint32_t col)
{
	const int32_t	i = (p.x + p.y * img->width);

	if (p.x >= 0 && p.x < (int32_t)img->width
		&& p.y >= 0 && p.y < (int32_t)img->height)
		((uint32_t *)img->pixels)[i] = col;
}

static void	fill(mlx_image_t *img, uint32_t col)
{
	int32_t	i;

	i = img->width * img->height;
	while (i--)
		((uint32_t *)img->pixels)[i] = col;
}

static int8_t	sign(int32_t a, int32_t b)
{
	if (a < b)
		return (1);
	else
		return (-1);
}

static void	draw_line(mlx_image_t *img, t_vec2 a, t_vec2 b, uint32_t col)
{
	const t_vec2	d = {.x = abs(b.x - a.x), .y = abs(b.y - a.y) * -1};
	const t_vec2	s = {.x = sign(a.x, b.x), .y = sign(a.y, b.y)};
	t_vec2			e;

	e.x = d.x + d.y;
	while (1)
	{
		draw_pixel(img, a, col);
		e.y = 2 * e.x;
		if ((a.x == b.x && a.y == b.y)
			|| (e.y >= d.y && a.x == b.x) || (e.y <= d.x && a.y == b.y))
			return ;
		if (e.y >= d.y)
		{
			e.x += d.y;
			a.x += s.x;
		}
		if (e.y <= d.x)
		{
			e.x += d.x;
			a.y += s.y;
		}
	}
}

void	draw(t_fdf	*fdf)
{
	int64_t	i;

	fill(fdf->win, BLACK);
	i = 0;
	while (i < fdf->lines)
	{
		if (fdf->line_b[i])
			draw_line(fdf->win, \
			(t_vec2){fdf->line[i][2].a.x, fdf->line[i][2].a.y}, \
			(t_vec2){fdf->line[i][2].b.x, fdf->line[i][2].b.y}, \
			fdf->col);
		i++;
	}
}
