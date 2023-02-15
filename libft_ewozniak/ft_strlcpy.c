/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 20:35:02 by ewozniak          #+#    #+#             */
/*   Updated: 2022/12/20 20:26:56 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//copies size_t -1 chars from src to dest return length of str (size_t)
//it tries to create.
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;

	srclen = -1;
	if (dst && src)
	{
		while (src[++srclen] != '\0')
			;
		if (dstsize == 0)
			return (srclen);
		while (--dstsize && *src)
			*dst++ = *src++;
		*dst = '\0';
		return (srclen);
	}
	return (0);
}

// int	main()
// {
// 	char src[100] = "hello";
//     char dst[100];
// 	char n = ft_strlcpy(dst, src, 6);
//     printf("ft_strlcpy:\n%s %d\n", dst, n);

// 	char src2[100] = "hello";
//     char dst2[100];
//     char n2 = strlcpy(dst2, src2, 6);
//     printf("strlcpy:\n%s %d\n", dst2, n2);
// 	return (0);
// }
