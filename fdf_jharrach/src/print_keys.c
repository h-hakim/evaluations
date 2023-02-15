/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_keys.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jharrach <jharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:36:23 by jharrach          #+#    #+#             */
/*   Updated: 2023/01/10 17:36:48 by jharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

void	print_keys(void)
{
	ft_printf("\n");
	ft_printf("    ---Rotation---\n");
	ft_printf("   x:    W | S   \n");
	ft_printf("   y:    A | D   \n");
	ft_printf("   z:    Q | E   \n\n");
	ft_printf("   ---Translation---\n");
	ft_printf("   x: LEFT | RIGHT   \n");
	ft_printf("   y: UP   | DOWN   \n");
	ft_printf("   z: F    | G   \n\n");
	ft_printf("    ---Scalling---\n");
	ft_printf(" xyz:    C | V   \n");
	ft_printf("   x:    J | L   \n");
	ft_printf("   y:    I | K   \n");
	ft_printf("   z:    U | O   \n\n");
	ft_printf("R:     reset parameters\n");
	ft_printf("T:     change projection\n");
	ft_printf("SHIFT: increase speed\n");
	ft_printf("ESC:   exit\n");
}
