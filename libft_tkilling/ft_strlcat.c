/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkilling <tkilling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:54:33 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/27 16:55:17 by tkilling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"
// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

// int	main(void)
// {
// 	char arr[1] = "";
//     char arrcp[1] = "";
//     char arr2[30] = "lorem ipsum dolor sit amet";

// 	printf("%zu\n", ft_strlcat(arr, arr2, 0));
// 	printf("%s\n%s\n", arr, arr2);

//     printf("%zu\n", strlcat(arrcp, arr2, 0));
// 	printf("%s\n%s\n", arrcp, arr2);
// 	return (0);
// }

/*
	concatinates src to dst 
	but only dstsize in max
	destlize = dst max space
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	while (dst && dst[i] != '\0' && i < dstsize)
		i++;
	j = ft_strlen(src);
	if (dstsize <= i)
		return (dstsize + j);
	j = i + j;
	while (src[k] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[k];
		i++;
		k++;
	}
	dst[i] = '\0';
	return (j);
}
