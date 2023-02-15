/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 20:05:40 by ewozniak          #+#    #+#             */
/*   Updated: 2022/12/20 22:54:51 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	ctr;

	ctr = 0;
	if (!s)
		return (NULL); 
	if (start >= ft_strlen(s))
		len = 0; 
	else if (ft_strlen(s + start) <= len)
		len = ft_strlen (s + start);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str)
	{
		while (len--)
		{
			str[ctr] = s[start + ctr];
			ctr++;
		}
		str[ctr] = '\0';
		return (str);
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str[100] = "fullstring";
// 	char	*sub = ft_substr(str, 0, 4);
// 	printf("ft_substr:\n%s\n", sub);
// 	return (0);
// }
