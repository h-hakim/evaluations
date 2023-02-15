/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkilling <tkilling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 09:31:19 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/27 15:43:39 by tkilling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"
// char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
/*
int	main(void)
{
printf("%s\n", ft_strnstr("ajdlisfhwisabvhqirbldsj;aflwefiasdlf", "isa", 100));
printf("%s\n", strnstr("ajdlisfhwisabvhqirbldsj;aflwefiasdlf", "isa", 100));
*/
// 	return (0);
// }

/*
	finds the needle in the haystack
	looks only in the first "len" chars of haystack
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	j = 0;
	ptr = (char *)haystack;
	if (needle[0] == '\0')
		return (ptr);
	while (i < len && haystack[i] != '\0')
	{
		j = i;
		while (needle[j - i] == haystack[j] && haystack[j] != '\0')
		{
			if (ft_strlen(needle) == 1)
				return (&ptr[i]);
			if (needle[(j - i) + 1] == '\0' && j < len)
				return (&ptr[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
