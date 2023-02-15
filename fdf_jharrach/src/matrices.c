/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrices.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jharrach <jharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 09:30:42 by jharrach          #+#    #+#             */
/*   Updated: 2023/01/09 09:31:10 by jharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

void	multiply_matrix3x3(t_vec3 *input, t_vec3 *output, float const m[3][3])
{
	output->x = m[0][0] * input->x + m[0][1] * input->y + m[0][2] * input->z;
	output->y = m[1][0] * input->x + m[1][1] * input->y + m[1][2] * input->z;
	output->z = m[2][0] * input->x + m[2][1] * input->y + m[2][2] * input->z;
}

void	multiply_matrix4x4(t_vec3 *i, t_vec3 *o, float m[4][4])
{
	const float	w = i->x * m[0][3] + i->y * m[1][3] + i->z * m[2][3] + m[3][3];

	o->x = i->x * m[0][0] + i->y * m[1][0] + i->z * m[2][0] + m[3][0];
	o->y = i->x * m[0][1] + i->y * m[1][1] + i->z * m[2][1] + m[3][1];
	o->z = i->x * m[0][2] + i->y * m[1][2] + i->z * m[2][2] + m[3][2];
	if (w != 0)
	{
		o->x /= w;
		o->y /= w;
		o->z /= w;
	}
}
