/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vectors.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jharrach <jharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 23:19:23 by jharrach          #+#    #+#             */
/*   Updated: 2023/01/09 09:32:02 by jharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

void	vec_add(t_vec3 *v1, t_vec3 *v2)
{
	v1->x += v2->x;
	v1->y += v2->y;
	v1->z += v2->z;
}

void	vec_sub(t_vec3 *v1, t_vec3 *v2)
{
	v1->x -= v2->x;
	v1->y -= v2->y;
	v1->z -= v2->z;
}

void	vec_mul(t_vec3 *v1, t_vec3 *v2)
{
	v1->x *= v2->x;
	v1->y *= v2->y;
	v1->z *= v2->z;
}

void	vec_copy(t_vec3 *v1, t_vec3 *v2)
{
	v1->x = v2->x;
	v1->y = v2->y;
	v1->z = v2->z;
}
