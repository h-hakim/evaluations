/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewozniak <ewozniak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:57:10 by ewozniak          #+#    #+#             */
/*   Updated: 2022/12/19 21:28:07 by ewozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int	main(void)
// {
// 	ft_putchar_fd('h', 1);
// 	ft_putchar_fd('e', 1);
// 	ft_putchar_fd('l', 1);
// 	ft_putchar_fd('l', 1);
// 	ft_putchar_fd('o', 1);
// 	return (0);
// }
