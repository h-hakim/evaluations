/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:29:54 by ewozniak          #+#    #+#             */
/*   Updated: 2022/12/20 23:13:18 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	index;
	size_t		len_s;

	index = 0;
	len_s = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len_s + 1));
	if (str)
	{
		while (s[index])
		{
			str[index] = f(index, s[index]);
			index ++;
		}
		str[index] = 0;
		return (str);
	}
	return (NULL);
}

// static char	touppr(unsigned int index, char c)
// {
// 	index = 0;
// 	return ((c - 32) * (c >= 97 && c <= 122) + c * (c < 97 || c > 122));
// }

// int	main(void)
// {
// 	char *str = ft_strmapi("helloWorld", touppr);
// 	printf("%s", str);
// 	return (0);
// }