/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewozniak <ewozniak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:54:09 by ewozniak          #+#    #+#             */
/*   Updated: 2022/12/19 21:27:37 by ewozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (((c >= 65) && (c <= 90))
		+ ((c >= 97) && (c <= 122)) + ((c >= 48) && (c <= 57)));
}

// int	main(void)
// {
// 	printf("ft_isalnum:\n%d\n", ft_isalnum(';'));
// 	printf("%d\n", ft_isalnum('5'));
// 	printf("%d\n", ft_isalnum('a'));
// 	printf("%d\n", ft_isalnum('Z'));

// 	printf("isalnum:\n%d\n", isalnum(';'));
// 	printf("%d\n", isalnum('5'));
// 	printf("%d\n", isalnum('a'));
// 	printf("%d\n", isalnum('Z'));
// 	return (0);
// }
