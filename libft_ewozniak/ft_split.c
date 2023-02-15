/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewozniak <ewozniak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 20:55:26 by ewozniak          #+#    #+#             */
/*   Updated: 2022/12/19 22:34:48 by ewozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_of_strings(char const *s, char c);
static int	substr_length(size_t start, char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	index;
	char	*str;
	char	delim[2];

	i = 0;
	index = 0;
	delim[0] = c;
	str = ft_strtrim(s, delim);
	res = malloc(sizeof(char *) * (num_of_strings(str, c) + 1));
	if (!s || !res)
		return (NULL);
	while (str[i++] != '\0')
	{
		if (str[i - 1] != c && i--)
		{
			res[index++] = ft_substr(str, i, substr_length(i, str, c));
			i += substr_length(i, str, c);
		}
	}
	res[index] = NULL;
	free(str);
	return (res);
}

static int	substr_length(size_t start, char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[start] != c && s[start++] != '\0' && ++len)
		;
	return (len);
}

static int	num_of_strings(char const *s, char c)
{
	size_t	count;
	size_t	len;
	size_t	i;

	count = 1;
	len = -1;
	i = 0;
	while (s[++len] != '\0')
		;
	if (len == 0)
		return (0);
	while (i < len)
		count += (s[i++] == c);
	return (count);
}

// int	main(void)
// {
// 	char str[100] = "hello,this,is,john";
// 	char **str2 = ft_split(str, ',');
// 	printf("%s\n", str2[0]);
// 	printf("%s\n", str2[1]);
// 	printf("%s\n", str2[2]);
// 	printf("%s\n", str2[3]);
// 	printf("%s\n", str2[4]);

// 	return (0);
// }
