/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_clipping.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jharrach <jharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 23:24:28 by jharrach          #+#    #+#             */
/*   Updated: 2023/01/08 20:36:49 by jharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

static int8_t	clip_line_r(t_vec3 *a, t_vec3 *b, t_vec3 clip)
{
	const t_vec3	c = {.x = a->x - b->x, .y = a->y - b->y, .z = a->z - b->z};
	const float		s = (clip.z - clip.x) / (clip.x - clip.y);

	if (clip.x > clip.z && clip.y > clip.z)
		return (0);
	if (clip.x > clip.z || clip.y > clip.z)
	{
		if (clip.x > clip.z)
		{
			a->x = a->x + s * c.x;
			a->y = a->y + s * c.y;
			a->z = a->z + s * c.z;
		}
		else
		{
			b->x = a->x + s * c.x;
			b->y = a->y + s * c.y;
			b->z = a->z + s * c.z;
		}
	}
	return (1);
}

int8_t	clip_line(t_vec3 *a, t_vec3 *b, t_vec3 clip)
{
	const t_vec3	c = {.x = a->x - b->x, .y = a->y - b->y, .z = a->z - b->z};
	const float		s = (clip.z - clip.x) / (clip.x - clip.y);

	if (clip.x < clip.z && clip.y < clip.z)
		return (0);
	if (clip.x < clip.z || clip.y < clip.z)
	{
		if (clip.x < clip.z)
		{
			a->x = a->x + s * c.x;
			a->y = a->y + s * c.y;
			a->z = a->z + s * c.z;
		}
		else
		{
			b->x = a->x + s * c.x;
			b->y = a->y + s * c.y;
			b->z = a->z + s * c.z;
		}
	}
	return (1);
}

int8_t	clip_for_win(t_line3 *l)
{
	int8_t	b;

	b = clip_line(&l->a, &l->b, (t_vec3){l->a.x, l->b.x, 0});
	if (b)
		b = clip_line_r(&l->a, &l->b, (t_vec3){l->a.x, l->b.x, WIDTH - 1});
	if (b)
		b = clip_line(&l->a, &l->b, (t_vec3){l->a.y, l->b.y, 0});
	if (b)
		b = clip_line_r(&l->a, &l->b, (t_vec3){l->a.y, l->b.y, HEIGHT - 1});
	return (b);
}
