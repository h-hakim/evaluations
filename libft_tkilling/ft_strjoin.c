/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkilling <tkilling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:37:04 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/27 15:18:37 by tkilling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strjoin(char const *s1, char const *s2);

// int	main(void)
// {
// 	char	*ptr;

// 	ptr = ft_strjoin("Hello", "1234567");
// 	printf("%s\n", ptr);
// 	free(ptr);
// 	return (0);
// }

/*
	creates a new str (s1 + s2)
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	ptr = (char *)malloc(sizeof(char) * (j + i + 1));
	if (ptr == NULL)
		return (ptr);
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
		ptr[i++] = s2[j++];
	ptr[i] = '\0';
	return (ptr);
}
