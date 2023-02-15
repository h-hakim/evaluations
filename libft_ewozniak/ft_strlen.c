/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:10:29 by ewozniak          #+#    #+#             */
/*   Updated: 2022/12/20 23:03:39 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//calculate the len of a str returns size_t
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

// int	main(void)
// {
// 	printf("ft_strlen:\n%d\n", (int) ft_strlen("123456789"));
// 	printf("%d\n", (int) ft_strlen("123456"));
// 	printf("%d\n", (int) ft_strlen(""));

// 	printf("strlen:\n%d\n", (int) strlen("123456789"));
// 	printf("%d\n", (int) strlen("123456"));
// 	printf("%d\n", (int) strlen(""));
// }
