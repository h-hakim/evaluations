/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:35:08 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/27 20:26:19 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"
// size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

// int	main(void)
// {
// 	char arr[20];

// 	printf("%zu\n", ft_strlcpy(arr, "Hello", 4));
// 	printf("%s\n", arr);
// 	return (0);
// }

/*
	copies dstsize of src to dst
*/
// size_t usigned int min. that might differ from computer to another.
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	if (!dst || !src || !dstsize) // thid is extra for fn protection
		return (i);
	while (src[j] != '\0' && j < (dstsize - 1))
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (i);
}
