/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewozniak <ewozniak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 01:24:53 by ewozniak          #+#    #+#             */
/*   Updated: 2022/12/20 18:39:58 by ewozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_swap_arr(char *arr, size_t start, size_t end);

char	*ft_itoa(int n)
{
	char	*str;
	size_t	ctr;

	str = (char *)malloc(sizeof(char) * 12);
	if (str == NULL)
		return (NULL);
	ctr = 0;
	if (n == -2147483648)
	{
		free(str);
		return ("-2147483648");
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
	return (str);
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
// 	char	*n1 = ft_itoa(-1564);
// 	char	*n2 = ft_itoa(35);
// 	char	*n3 = ft_itoa(10);
// 	char	*n4 = ft_itoa(-133505);
// 	char	*n5 = ft_itoa(0);
// 	char	*n6 = ft_itoa(-2147483648);
// 	char	*n7 = ft_itoa(2147483647);
// 	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n", n1, n2, n3, n4, n5, n6, n7);
// 	return (0);
// }