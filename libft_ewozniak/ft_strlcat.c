/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewozniak <ewozniak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 20:34:59 by ewozniak          #+#    #+#             */
/*   Updated: 2022/12/16 20:34:59 by ewozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	remsize;

	dstlen = -1;
	srclen = -1;
	remsize = dstsize;
	while (src[++srclen] != '\0')
		;
	while (dst[++dstlen] != '\0')
		;
	if (remsize <= dstlen)
		return (remsize + srclen);
	while (*dst && remsize-- > 0)
		dst++;
	while (--remsize)
		*dst++ = *src++;
	*dst = '\0';
	return (dstlen + srclen);
}

// int main()
// {
//     char src[100] = "world";
//     char dst[100] = "hello";
// 	char n = ft_strlcat(dst, src, 11);
//     printf("ft_strlcat:\n%s %d\n", dst, n);

// 	char src3[100] = "or not";
//     char dst3[100] = "Some string ";
// 	char n3 = ft_strlcat(dst3, src3, 3);
//     printf("%s %d\n", dst3, n3);

// 	char src2[100] = "world";
//     char dst2[100] = "hello";
//     char n2 = strlcat(dst2, src2, 11);
//     printf("strlcat:\n%s %d\n", dst2, n2);

// 	char src4[100] = "or not";
//     char dst4[100] = "Some string ";
//     char n4 = strlcat(dst4, src4, 3);
//     printf("%s %d\n", dst4, n4);
//     return (0);
// }