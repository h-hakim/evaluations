/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkilling <tkilling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:40:42 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/27 15:36:49 by tkilling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"
// int	ft_strncmp(const char *s1, const char *s2, size_t n);

// int	main(void)
// {
// 	printf("%d\n", ft_strncmp("AA", "AA", 1));
// 	printf("%d\n", strncmp("AA", "AA", 1));
// 	return (0);
// }

/*
	compare n chars of s1 and s2
	if s1 > s2 = +
	if s2 > s1 = -
	if   ==    = 0
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && i < (n - 1))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
