/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkilling <tkilling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 09:44:07 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/27 12:50:30 by tkilling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd);

// int	main(void)
// {
// 	ft_putchar_fd('A', 1);
// }

/*
	Outputs the character ’c’ to the given 
	file descriptor (fd)
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
