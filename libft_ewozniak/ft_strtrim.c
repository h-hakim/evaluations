/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewozniak <ewozniak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 20:35:56 by ewozniak          #+#    #+#             */
/*   Updated: 2022/12/19 22:53:08 by ewozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	
ft_trimleft(char const *s1, char const *set, size_t len_s1, size_t len_set);
static size_t	
ft_trimright(char const *s1, char const *set, size_t len_s1, size_t len_set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len_s1;
	size_t	len_set;
	size_t	offset;
	size_t	ctr;

	len_s1 = -1;
	len_set = -1;
	ctr = 0;
	while (s1[++len_s1] != '\0')
		;
	while (set[++len_set] != '\0')
		;
	offset = ft_trimleft(s1, set, len_s1, len_set)
		+ ft_trimright(s1, set, len_s1, len_set);
	if (offset == len_s1 * 2)
		return ("");
	str = (char *)malloc(sizeof(char) * (len_s1 - offset + 1));
	if (str == NULL)
		return (str);
	while (len_s1-- - offset && ++ctr)
		str[ctr - 1] = s1[ft_trimleft(s1, set, len_s1, len_set) + ctr - 1];
	str[ctr] = '\0';
	return (str);
}

static size_t
	ft_trimleft(char const *s1, char const *set, size_t len_s1, size_t len_set)
{
	size_t	len_init;
	size_t	prev_res;
	size_t	res;
	size_t	ctr_s1;
	size_t	ctr_set;

	len_init = len_set;
	ctr_s1 = 0;
	res = 0;
	ctr_set = 0;
	prev_res = 0;
	while (len_s1-- && ++ctr_s1)
	{
		prev_res = res;
		while (len_set-- && ++ctr_set)
			res += 1 * (s1[ctr_s1 - 1] == set[ctr_set - 1]);
		if (prev_res == res)
			return (res);
		len_set = len_init;
		ctr_set = 0;
	}
	return (res);
}

static size_t
	ft_trimright(char const *s1, char const *set, size_t len_s1, size_t len_set)
{
	size_t	len_init;
	size_t	prev_res;
	size_t	res;
	size_t	ctr_s1;
	size_t	ctr_set;

	len_init = len_set;
	ctr_s1 = -1;
	while (s1[++ctr_s1] != '\0')
		;
	res = 0;
	ctr_set = 0;
	prev_res = 0;
	while (len_s1-- && ctr_s1--)
	{
		prev_res = res;
		while (len_set-- && ++ctr_set)
			res += 1 * (s1[ctr_s1] == set[ctr_set - 1]);
		if (prev_res == res)
			return (res);
		len_set = len_init;
		ctr_set = 0;
	}
	return (res);
}

// int	main(void)
// {
// 	char	s1[100] = "_-*Some String*-_";
// 	char	set[100] = "_-*";
// 	printf("%s\n", ft_strtrim(s1, set));

// 	char	s2[100] = "     Hello World   ";
// 	char	set2[100] = " ";
// 	printf("%s\n", ft_strtrim(s2, set2));
// 	return (0);
// }