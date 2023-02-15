/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewozniak <ewozniak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:36:22 by ewozniak          #+#    #+#             */
/*   Updated: 2022/12/19 21:27:40 by ewozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return (((c >= 65) && (c <= 90)) + ((c >= 97) && (c <= 122)));
}

// int	main(void)
// {
// 	printf("ft_isalpha:\n%d\n", ft_isalpha(';'));
// 	printf("%d\n", ft_isalpha('5'));
// 	printf("%d\n", ft_isalpha('a'));
// 	printf("%d\n", ft_isalpha('Z'));

// 	printf("isalpha:\n%d\n", isalpha(';'));
// 	printf("%d\n", isalpha('5'));
// 	printf("%d\n", isalpha('a'));
// 	printf("%d\n", isalpha('Z'));
// 	return (0);
// }
