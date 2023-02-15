/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewozniak <ewozniak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 20:33:05 by ewozniak          #+#    #+#             */
/*   Updated: 2022/12/19 22:41:10 by ewozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len_s1;
	size_t	len_s2;
	size_t	ctr;

	len_s1 = -1;
	len_s2 = -1;
	ctr = 0;
	while (s1[++len_s1] != '\0')
		;
	while (s2[++len_s2] != '\0')
		;
	str = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (str)
	{
		while (len_s1--)
			str[ctr++] = *s1++;
		while (len_s2--)
			str[ctr++] = *s2++;
		str[ctr] = '\0';
		return (str);
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str1[100] = "Hello ";
// 	char	str2[100] = "World";

// 	char	*s = ft_strjoin(str1, str2);
// 	printf("%s\n", s);
// 	return (0);
// }