/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkilling <tkilling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 08:19:50 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/27 12:54:03 by tkilling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd);

// int	main(void)
// {
// 	ft_putnbr_fd(0, 1);
// 	return (0);
// }

/*
	Prints the integer ’n’ to the given 
	file descriptor (fd)
*/

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		n = n * -1;
		write(fd, "-", 1);
	}
	else if (n == 0)
		write(fd, "0", 1);
	if (n > 0)
	{
		c = (n % 10) + 48;
		n = n / 10;
		if (n > 0)
			ft_putnbr_fd(n, fd);
		write(fd, &c, 1);
	}
}
