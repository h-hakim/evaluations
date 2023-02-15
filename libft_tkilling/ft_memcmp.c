/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkilling <tkilling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:10:14 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/27 12:31:07 by tkilling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

// int	ft_memcmp(const void *s1, const void *s2, size_t n);

// int	main(void)
// {
// 	printf("%d\n", ft_memcmp("h\0", "h\0a", 6));
// 	printf("%d\n", memcmp("h\0", "h\0a", 6));

// 	return (0);
// }

/*
	compares 2 strings max n chars
	return = -... if s2 is bigger
	return = +... if s1 is bigger
	return = 0 if equal
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	i = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (i < n)
	{
		if (ptr1[i] < ptr2[i])
			return (ptr1[i] - ptr2[i]);
		else if (ptr1[i] > ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}
