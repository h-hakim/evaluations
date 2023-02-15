/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewozniak <ewozniak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 20:34:53 by ewozniak          #+#    #+#             */
/*   Updated: 2022/12/16 20:34:53 by ewozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (unsigned char)c)
		return ((char *) s);
	return (NULL);
}

// int main()
// {
//     char str[] = "abcdef";
//     char *ptr = ft_strchr(str, 'c');
//     printf("ft_strchr:\n%s\n\n", ptr);

//     char str2[] = "abcdef";
//     char *ptr2 = strchr(str2, 'c');
//     printf("strchr:\n%s\n", ptr2);
//     return (0);
// }