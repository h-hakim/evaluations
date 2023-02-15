/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkilling <tkilling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:34:01 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/27 15:05:51 by tkilling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"
// char    *ft_strchr(const char *s, int c);

// int main(void)
// {
// 	printf("%s", ft_strchr("Hello 1234", 'o'));
// 	return (0);
// }

/*
	looks for c in (char *)s
	returns an (char *)s to the found c
	or NULL if not in s
*/

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	c2;

	c2 = (unsigned char)c;
	i = 0;
	while (s[i] != c2 && s[i] != '\0')
		i++;
	if (s[i] == c2)
		return ((char *)&s[i]);
	return (NULL);
}
