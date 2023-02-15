/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 20:35:19 by ewozniak          #+#    #+#             */
/*   Updated: 2022/12/20 20:59:01 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	ctr;

	ctr = -1;
	while (s[++ctr] != '\0')
		;
	if ((unsigned char) c == 0)
		return ((char *) (s + ctr));
	while (ctr--)
	{
		if (s[ctr] == (unsigned char)c)
			return ((char *)&s[ctr]);
	}
	return (NULL);
}

// int	main()
// {
// 	char s[100] = "hello";
//     char c = 'l';
// 	char *n = ft_strrchr(s, c);
//     printf("ft_strrchr:\n%s\n", n);

// 	char s2[100] = "hello";
//     char c2 = 'l';
// 	char *n2 = strrchr(s2, c2);
//     printf("strrchr:\n%s\n", n2);
// 	return (0);
// }