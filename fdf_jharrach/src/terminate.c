/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   terminate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jharrach <jharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 07:53:14 by jharrach          #+#    #+#             */
/*   Updated: 2023/01/09 10:25:15 by jharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

void	free_fdf(t_fdf *fdf)
{
	int32_t	y;

	y = 0;
	while (y < fdf->rows)
		free(fdf->fdf[y++]);
	if (fdf->fdf)
		free(fdf->fdf);
}

void	terminate_fdf(t_fdf *fdf)
{
	while (fdf->lines--)
		free(fdf->line[fdf->lines]);
	free(fdf->line);
	free(fdf->line_b);
}

void	mlx_error(t_fdf *fdf)
{
	ft_printf("\033[0;91merror:\033[0;39m MLX42 error\n");
	if (fdf->mlx)
		mlx_terminate(fdf->mlx);
	terminate_fdf(fdf);
	exit(EXIT_FAILURE);
}
