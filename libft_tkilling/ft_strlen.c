/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkilling <tkilling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:27:37 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/27 15:29:21 by tkilling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"
//size_t  ft_strlen(const char *s);

// int main(void)
// {
//     char *arr = "Hello dsafasd fasdf asdf asda\t\t\ndhfihgsi";
//     printf("%zu\t", ft_strlen(arr));
//     printf("%zu\n", strlen(arr));
//     return (0);
// }

/*
	get strlen
*/

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
