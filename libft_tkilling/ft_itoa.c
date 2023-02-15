/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkilling <tkilling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:54:15 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/27 10:23:33 by tkilling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//char		*ft_itoa(int n);
static void	ft_fill_str(char *ptr, int n, int i);

// int	main(void)
// {
// 	char	*ptr;

// 	ptr = ft_itoa(-23648);
// 	printf("%s", ptr);
// 	return (0);
// }

/*
	convert int to str
*/

char	*ft_itoa(int n)
{
	int		new_n;
	int		i;
	char	*ptr;

	i = 0;
	new_n = n;
	while (new_n && i++ >= 0)
		new_n = new_n / 10;
	if (n <= 0)
		i++;
	ptr = (char *)malloc(i + 1);
	if (ptr == NULL)
		return (NULL);
	ft_fill_str(ptr, n, i);
	return (ptr);
}

static void	ft_fill_str(char *ptr, int n, int i)
{
	int	x;
	int	minus;

	minus = 0;
	ptr[i--] = '\0';
	if (n == -2147483648)
	{
		ptr[1] = '2';
		n = -147483648;
		minus++;
	}
	if (n < 0)
	{
		ptr[0] = '-';
		n = n * -1;
		minus++;
	}
	while (i >= 0 + minus)
	{
		x = n % 10;
		n = n / 10;
		ptr[i--] = x + 48;
	}
}
