/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkilling <tkilling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 08:19:29 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/27 10:17:37 by tkilling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_bzero(void *s, size_t n);

// int	main(void)
// {
// 	char	str[50] = "Hello hello";
// 	char	str2[50] = "Hello hello";

// 	ft_bzero((void *)str + 4, 4);
// 	printf("%s\n", str);
// 	bzero((void *)str2 + 4, 4);
// 	printf("%s\n", str2);
// 	printf("%s\n", (str + 8));
// 	printf("%s\n", (str2 + 8));
// 	return (0);
// }

/*
	n zeros fill in s
*/

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
		((char *)s)[i++] = '\0';
}
