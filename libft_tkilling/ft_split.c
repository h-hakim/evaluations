/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 09:54:32 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/27 20:27:52 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_split(char const *s, char c);
static size_t	ft_get_count(char const *s, char c, size_t x);
static void		ft_fill(char const *s, char c, char	**ptr, size_t x);
static int		ft_clear(char **ptr);

// int	main(void)
// {
// 	char	**ptr;
// 	int		i;

// 	i = 0;
// 	ptr = ft_split(" bsjddfh    asdjhfa jsdffb", ' ');
// 	if (ptr != NULL)
// 	{
// 		while (ptr[i] != NULL)
// 		{
// 			printf("%s\n", ptr[i]);
// 			i++;
// 		}
// 		free(ptr);
// 	}
// 	return (0);
// }

/*
	splits s in smaler strings and allocates
	mem for the new strings. c is the indecator
	for the splitting
*/

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	i;
	size_t	count;
	size_t	x;

	if (!s)
		return (NULL);
	x = ft_get_count(s, c, 0);
	ptr = (char **)malloc(sizeof(char *) * (x + 1));
	if (ptr == NULL)
		return (NULL);
	ptr[x] = NULL;
	i = 0;
	while (i < x)
	{
		count = ft_get_count(s, c, i + 1);
		ptr[i] = (char *)malloc(sizeof(char) * (count + 1));
		if (!(ptr[i]) && ft_clear(ptr))
			return (NULL);
		*(*(ptr + i++) + count) = '\0';
	}
	ft_fill(s, c, ptr, x);
	return (ptr);
}

/*
	frees all allocated mem
	if allocation fails
*/

static int	ft_clear(char **ptr)
{
	size_t	i;

	i = 0;
	while (ptr[i] != NULL)
		free(ptr[i++]);
	free(ptr);
	return (1);
}

/*
	x = number of s to count 
	(x = 0) = count number of new str.
	(x = 1) = count 1. new str len.
*/

static size_t	ft_get_count(char const *s, char c, size_t x)
{
	size_t	i;
	size_t	count_str;
	size_t	count_char;

	i = 0;
	count_str = 0;
	while (s[i] != '\0')
	{
		count_char = 0;
		if (s[i] != c)
		{
			count_str++;
			while (s[i] != c && s[i] != '\0')
			{
				count_char++;
				i++;
			}
			if (count_str == x)
				return (count_char);
		}
		if (s[i] != '\0')
			i++;
	}
	return (count_str);
}

/*
	x = number of strings to fill
	*s = the old str
	c = the seperator
	**ptr = the allocated arr to fill
	1. while: skip sep
	2. while: fill
	i = which ptr arr location
	j = position in s
	k = position in ptr
*/

static void	ft_fill(char const *s, char c, char	**ptr, size_t x)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (i < x)
	{
		k = 0;
		while (s[j] == c && s[j] != '\0')
			j++;
		while (s[j] != c && s[j] != '\0')
			*(*(ptr + i) + k++) = s[j++];
		i++;
	}
}
