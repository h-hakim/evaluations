/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewozniak <ewozniak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 20:34:29 by ewozniak          #+#    #+#             */
/*   Updated: 2022/12/16 20:34:29 by ewozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//this function 
//returns void  ptr 
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*arr;
	size_t				ctr;

	arr = (unsigned char *)s;
	ctr = 0;
	if (!n)
		return (NULL);
	while (ctr++ < n)
	{
		if (arr[ctr - 1] == (unsigned char)c)
			return ((void *)&arr[ctr - 1]);
	}
	if (*arr == (unsigned char )c)
		return ((void *)&arr[ctr]);
	return ((void *)0);
}

// int main()
// {
//     char arr[100] = "HelloWorld";
//     unsigned char *ptr = ft_memchr(arr, 'e', 6);
//     printf("ft_memchr:\n%s\n", ptr);

// 	char arr2[100] = "HelloWorld";
//     unsigned char *ptr2 = memchr(arr2, 'e', 6);
//     printf("memchr:\n%s\n", ptr2);
//     return (0);
// }
