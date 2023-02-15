/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 20:35:15 by ewozniak          #+#    #+#             */
/*   Updated: 2022/12/20 21:30:51 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	ctr;
	size_t	ctr2;
	size_t	nlen;
	size_t	ilen;

	ctr = 0;
	ctr2 = 0;
	nlen = ft_strlen(needle);
	ilen = len;
	if (nlen == 0)
		return ((char *)&haystack[0]);
	while (len-- && haystack[ctr] != '\0')
	{
		while (ctr2 < nlen)
		{
			if (haystack[ctr + ctr2] != '\0'
				&& haystack[ctr + ctr2] != needle[ctr2])
				break ;
			else if ((ctr2 == nlen - 1) && (ctr + nlen) <= (ilen))
				return ((char *)&haystack[ctr]);
			ctr2++;
		}
		ctr2 = 0;
		ctr++;
	}
	return ((void *)0);
}

// int	main()
// {
// 	char haystack[100] = "hello";
//     char needle[100] = "el";
// 	char *n = ft_strnstr(haystack, needle, 5);
//     printf("ft_strnstr:\n%s\n", n);

// 	char haystack2[100] = "hello";
//     char needle2[100] = "el";
//     char *n2 = strnstr(haystack2, needle2, 5);
//     printf("strnstr:\n%s\n", n2);
// 	return (0);
// }