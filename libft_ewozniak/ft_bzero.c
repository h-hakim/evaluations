/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewozniak <ewozniak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:37:57 by ewozniak          #+#    #+#             */
/*   Updated: 2022/12/19 21:57:54 by ewozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	if (n == 0)
		return ;
	str = s;
	i = 0;
	while (i < n)
		str[i++] = '\0';
}

// int	main(void)
// {
// 	char str[100] = "hello";
// 	ft_bzero(str, 3);
// 	printf("ft_bzero:\n%s\n", &str[3]);

// 	char str2[100] = "hello";
// 	bzero(str2, 3);
// 	printf("bzero:\n%s\n", &str2[3]);
// 	return (0);
// }
