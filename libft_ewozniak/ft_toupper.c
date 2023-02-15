/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewozniak <ewozniak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:10:29 by ewozniak          #+#    #+#             */
/*   Updated: 2022/12/19 21:29:18 by ewozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	return ((c - 32) * (c >= 97 && c <= 122) + c * (c < 97 || c > 122));
}

// int	main(void)
// {
// 	printf("ft_toupper:\n%c\n", ft_toupper('a'));
// 	printf("%c\n", ft_toupper('z'));

// 	printf("toupper:\n%c\n", toupper('a'));
// 	printf("%c\n", toupper('z'));
// }
