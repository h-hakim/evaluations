/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkilling <tkilling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:52:55 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/27 12:47:18 by tkilling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//void    *ft_memmove(void *dst, const void *src, size_t len);

// int main(void)
// {
// 	// //char	arr[30] = "Hello bla";
// 	// // char	s[] = {65, 66, 67, 68, 69, 0, 45};
// 	// // char	s0[] = { 0,  0,  0,  0,  0,  0, 0};
// 	// // char	sCpy[] = {65, 66, 67, 68, 69, 0, 45};
// 	// char	sResult[] = {67, 68, 67, 68, 69, 0, 45};
// 	// char	sResult2[] = {67, 67, 68, 68, 69, 0, 45};

// 	// printf("%s\n", ft_memmove(sResult + 1, sResult, 2));
// 	// printf("%s\n", sResult + 1);
// 	// printf("%d\n", !memcmp(sResult, sResult2, 7));

// 	// return (0);
// }

/*
	copies n bytes from memory area src to memory area dest
	The memory areas can overlap
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*dst2;
	const char	*src2;

	if (!dst && !src)
		return (NULL);
	dst2 = (char *)dst;
	src2 = (char *)src;
	i = 0;
	if (src2 < dst2)
	{
		while (i < len)
		{
			dst2[len - (i + 1)] = src2[len - (i + 1)];
			i++;
		}
	}
	else
		while (i++ < len)
			dst2[i - 1] = src2[i - 1];
	return (dst);
}
