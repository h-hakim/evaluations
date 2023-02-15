/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkilling <tkilling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:32:29 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/27 15:48:29 by tkilling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"
// char    *ft_strrchr(const char *s, int c);

// int main(void)
// {
// 	printf("%s", ft_strrchr("Hello 1234", 'x'));
// 	return (0);
// }

/*
	locates the first occurrence of c
	if c = '\0' it finds end
	not appear = NULL
*/

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	char			*ptr;
	unsigned char	c2;

	c2 = (unsigned char)c;
	i = 0;
	ptr = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == c2)
			ptr = (char *)&s[i];
		i++;
	}
	if (s[i] == c2)
		ptr = (char *)&s[i];
	return (ptr);
}
