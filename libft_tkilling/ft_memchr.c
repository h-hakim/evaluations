/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkilling <tkilling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:12:33 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/27 12:25:17 by tkilling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

// void	*ft_memchr(const void *s, int c, size_t n);

// int	main(void)
// {
// 	printf("%s\n", (char *)ft_memchr("Hello s  dfas", 'l', 5));
// 	printf("%s", (char *)memchr("Hello s  dfas", 'l', 5));
// 	return (0);
// }

/*
	finds the first c in s
	looking only in the first n chars
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	int		x;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	if (c > 255)
	{
		x = c / 256;
		c = c - (x * 256);
	}
	while (i < n)
	{
		if (ptr[i] == c)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}
