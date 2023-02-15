/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewozniak <ewozniak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 20:34:32 by ewozniak          #+#    #+#             */
/*   Updated: 2022/12/16 20:34:32 by ewozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*arr1;
	const unsigned char	*arr2;
	size_t				ctr;

	arr1 = (const unsigned char *)s1;
	arr2 = (const unsigned char *)s2;
	ctr = 0;
	while (ctr++ < n)
		if (arr1[ctr - 1] != arr2[ctr - 1])
			return (arr1[ctr - 1] - arr2[ctr - 1]);
	return (0);
}

// int main()
// {
//     int result;

//     char str1[100] = "bbc";
//     char str2[100] = "abc";

//     result = memcmp(str1, str2, 3);
//     printf("memcmp:\n%d\n", result);

//     result = ft_memcmp(str1, str2, 3);
//     printf("ft_memcmp\n%d\n", result);

//     return (0);
// }