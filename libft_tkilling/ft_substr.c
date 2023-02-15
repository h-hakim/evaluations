/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkilling <tkilling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:22:42 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/27 15:58:12 by tkilling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_substr(char const *s, unsigned int start, size_t len);

// int	main(void)
// {
// 	char	*ptr;

// 	ptr = ft_substr("HelloHelloaaaaaaaa", 5, 5);
// 	printf("%s\n", ptr);
// 	free(ptr);
// 	return (0);
// }

/*
	create a substring
	The substring begins at index ’start’ and is of
	maximum size ’len’.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (i < start)
		len = 0;
	else if (i < (start + len))
		len = i - start;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	len = start + len;
	while (s[start] != '\0' && start < len)
		ptr[i++] = s[start++];
	ptr[i] = '\0';
	return (ptr);
}
