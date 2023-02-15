/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewozniak <ewozniak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 20:35:11 by ewozniak          #+#    #+#             */
/*   Updated: 2022/12/16 20:35:11 by ewozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
		{
			return (-1 * (*(unsigned char *)s1 < *(unsigned char *)s2)
				+ (*(unsigned char *)s1 > *(unsigned char *)s2));
		}
		s1++;
		s2++;
	}
	return (0);
}

// int main()
// {
//     char str1[100] = "abbdef";
//     char str2[100] = "abcdef";
//     printf("ft_strncmp:\n%d\n", ft_strncmp(str1, str2, 6));

// 	char str3[100] = "abbdef";
//     char str4[100] = "abcdef";
//     printf("strncmp:\n%d\n", strncmp(str3, str4, 6));
//     return (0);
// }