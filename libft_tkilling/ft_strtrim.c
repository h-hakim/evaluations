/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkilling <tkilling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:53:08 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/27 15:51:34 by tkilling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//char			*ft_strtrim(char const *s1, char const *set);
static size_t	ft_get_start1_end2(char const *s1, char const *set, int x);

// int	main(void)
// {
// 	char	*ptr;

// 	ptr = ft_strtrim("a  b aa  b a ", " aaa");
// 	printf("%s", ptr);
// 	free(ptr);
// 	return (0);
// }

/*
	Allocates (with malloc(3)) and returns a copy of
	’s1’ with the characters specified in ’set’ removed
	from the beginning and the end of the string.
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	start = ft_get_start1_end2(s1, set, 1);
	end = 1 + ft_get_start1_end2(s1, set, 2);
	if (start >= end)
	{
		end = 0;
		start = 0;
	}
	ptr = (char *)malloc(end - start + 1);
	if (ptr == NULL)
		return (ptr);
	while (s1[start] != '\0' && start < end)
		ptr[i++] = s1[start++];
	ptr[i] = '\0';
	return (ptr);
}

static size_t	ft_get_start1_end2(char const *s1, char const *set, int x)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i] != '\0' && x == 1)
	{
		j = 0;
		while (s1[i] != set[j] && set[j] != 0)
			j++;
		if (s1[i] != set[j])
			return (i);
		i++;
	}
	while (s1[i] != '\0' && x == 2)
		i++;
	while (i != 0 && i - 1 != 0 && x == 2)
	{
		j = 0;
		while (s1[i - 1] != set[j] && set[j] != '\0')
			j++;
		if (s1[i - 1] != set[j])
			return (i - 1);
		i--;
	}
	return (i);
}
