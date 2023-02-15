/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_center.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jharrach <jharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 09:25:20 by jharrach          #+#    #+#             */
/*   Updated: 2023/01/10 17:36:41 by jharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

static t_vec2	get_min_max(t_fdf *fdf)
{
	int32_t	x;
	int32_t	y;
	t_vec2	result;

	result.x = INT32_MIN;
	result.y = INT32_MAX;
	y = 0;
	while (y < fdf->rows)
	{
		x = 0;
		while (x < fdf->cols)
		{
			if (fdf->fdf[y][x] > result.x)
				result.x = fdf->fdf[y][x];
			if (fdf->fdf[y][x] < result.y)
				result.y = fdf->fdf[y][x];
			x++;
		}
		y++;
	}
	return (result);
}

void	set_center(t_fdf *fdf)
{
	int32_t	x;
	int32_t	y;
	int64_t	delta;
	t_vec2	max_min;

	max_min = get_min_max(fdf);
	delta = (max_min.x + max_min.y) / 2;
		x = 0;
	while (x < fdf->cols)
	{
		y = 0;
		while (y < fdf->rows)
		{
			fdf->fdf[y][x] -= delta;
			y++;
		}
		x++;
	}
}
