/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewozniak <ewozniak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 23:24:32 by ewozniak          #+#    #+#             */
/*   Updated: 2022/12/18 23:24:32 by ewozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int	length;
	int	ctr;

	ctr = 0;
	length = -1;
	while (s[++length] != '\0')
		;
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (str && s)
	{
		while (ctr++ <= length)
			str[ctr - 1] = s[ctr - 1];
		str[ctr] = 0;
		return (str);
	}
	return (NULL);
}

// int main()
// {
//     char str1[100] = "abcdef";
//     char *str = ft_strdup(str1);
//     printf("ft_strdup:\n%s\n\n", str);

//     char str3[100] = "abcdef";
//     char *str2 = strdup(str3);
//     printf("strdup:\n%s\n", str2);
//     return (0);
// }