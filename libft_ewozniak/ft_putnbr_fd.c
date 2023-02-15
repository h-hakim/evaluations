/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewozniak <ewozniak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 20:59:11 by ewozniak          #+#    #+#             */
/*   Updated: 2022/12/20 18:53:46 by ewozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_swap_arr(char *arr, size_t start, size_t end);

void	ft_putnbr_fd(int n, int fd)
{
	char	str[12];
	size_t	ctr;

	ctr = 0;
	if (n == -2147483648)
	{
		ft_putendl_fd("-2147483648", fd);
		return ;
	}
	if (n == 0)
		str[ctr++] = '0';
	if ((-1 + (2 * (n >= 0))) == -1 && ++ctr)
		str[0] = '-';
	while (n * (-1 + (2 * (n >= 0))) > 0)
	{
		str[ctr++] = ((n * (-1 + (2 * (n >= 0)))) % 10) + '0';
		n /= 10;
	}
	str[ctr] = '\0';
	ft_swap_arr(str, 1 * (str[0] == '-'), ctr - 1);
	ft_putendl_fd(str, fd);
}

static char	*ft_swap_arr(char *arr, size_t start, size_t end)
{
	char	temp;

	while ((end - start + 1) / 2)
	{
		temp = arr[start];
		arr[start++] = arr[end];
		arr[end--] = temp;
	}
	return (arr);
}

// int	main(void)
// {
// 	ft_putnbr_fd(-1223, 1);
// 	return (0);
// }