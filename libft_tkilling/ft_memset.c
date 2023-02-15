/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkilling <tkilling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:33:53 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/19 14:38:57 by tkilling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"
// void    *ft_memset(void *b, int c, size_t len);

// int main(void)
// {
//     char arr[10] = "Hello you";
//     char arr2[10] = "Hello you";
//     char *ptr;

//     ptr = (char *)ft_memset(arr + 2, 'a', 10);
//     printf("%s\t", ptr);
//     printf("%s\n", arr);

//     ptr = (char *)memset(arr2 + 2, 'a', 4);
//     printf("%s\t", ptr);
//     printf("%s\n", arr2);

//     return (0);
// }

/*
	copies the character c to the first "len" characters of "b"
*/

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
		((char *)b)[i++] = c;
	return (b);
}
