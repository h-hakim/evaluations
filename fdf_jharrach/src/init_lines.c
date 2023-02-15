/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_lines.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jharrach <jharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 23:28:48 by jharrach          #+#    #+#             */
/*   Updated: 2023/01/10 17:34:18 by jharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

static void	error1(t_fdf *fdf, t_line3 **line, t_vec2 p)
{
	int32_t	x;
	int32_t	y;

	x = 0;
	while (x < fdf->cols - 1)
	{
		y = 0;
		while (y < fdf->rows)
		{
			if (x == p.x && y == p.y)
			{
				free(fdf->line);
				ft_printf("\033[0;91merror:\033[0;39m Allocation failed\n");
				exit(EXIT_FAILURE);
			}
			free(line[x + y * (fdf->cols - 1)]);
			y++;
		}
		x++;
	}
}

static void	error2(t_fdf *fdf, t_line3 **line, t_vec2 p)
{
	int32_t	x;
	int32_t	y;

	x = 0;
	while (x < fdf->cols)
	{
		y = 0;
		while (y < fdf->rows - 1)
		{
			if (x == p.x && y == p.y)
			{
				free(fdf->line);
				ft_printf("\033[0;91merror:\033[0;39m Allocation failed\n");
				exit(EXIT_FAILURE);
			}
			free(line[x + y * fdf->cols]);
			y++;
		}
		x++;
	}
}

static void	line_error(t_fdf *fdf, t_line3 **line, t_vec2 p)
{
	int32_t	x;
	int32_t	y;

	free_fdf(fdf);
	free(fdf->line_b);
	if (fdf->line == line)
		error1(fdf, line, p);
	else
	{
		x = 0;
		while (x < fdf->cols - 1)
		{
			y = 0;
			while (y < fdf->rows)
				free(fdf->line[x + (y++) * (fdf->cols - 1)]);
			x++;
		}
		error2(fdf, line, p);
	}
}

void	init_lines(t_fdf *fdf, t_vec2 max, t_vec2 d, t_line3 **line)
{
	int32_t	x;
	int32_t	y;

	x = 0;
	while (x < max.x)
	{
		y = 0;
		while (y < max.y)
		{
			line[x + y * max.x] = malloc(sizeof(t_line3) * 3);
			if (!line[x + y * max.x])
				line_error(fdf, line, (t_vec2){x, y});
			line[x + y * max.x][0].a = (t_vec3){\
			.x = x - (float)(fdf->cols - 1) / 2, \
			.y = y - (float)(fdf->rows - 1) / 2, \
			.z = (float)fdf->fdf[y][x] * Z_MULTIPLIER};
			line[x + y * max.x][0].b = (t_vec3){\
			.x = x - (float)(fdf->cols - 1) / 2 + d.x, \
			.y = y - (float)(fdf->rows - 1) / 2 + d.y, \
			.z = (float)fdf->fdf[y + d.y][x + d.x] * Z_MULTIPLIER};
			y++;
		}
		x++;
	}
}
