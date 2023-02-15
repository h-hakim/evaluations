/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewozniak <ewozniak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 20:34:48 by ewozniak          #+#    #+#             */
/*   Updated: 2022/12/16 20:34:48 by ewozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;

	str = s;
	while (n--)
		*str++ = (unsigned char)c;
	return (s);
}

// int main()
// {
//     char arr[] = "abc";
//     printf("ft_memset:\n%s\n", arr);
//     ft_memset(arr, 'h', 2);
//     printf("%s\n\n", arr);

//     char arr2[] = "abc";
//     printf("memset:\n%s\n", arr2);
//     memset(arr2, 'h', 2);
//     printf("%s\n", arr2);
//     return (0);
// }