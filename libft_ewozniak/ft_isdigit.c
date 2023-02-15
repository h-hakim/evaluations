/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewozniak <ewozniak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:59:12 by ewozniak          #+#    #+#             */
/*   Updated: 2022/12/19 21:27:46 by ewozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

// int	main(void)
// {
// 	printf("ft_isdigit:\n%d\n", ft_isdigit(';'));
// 	printf("%d\n", ft_isdigit('5'));
// 	printf("%d\n", ft_isdigit('a'));
// 	printf("%d\n", ft_isdigit('Z'));

// 	printf("isdigit:\n%d\n", isdigit(';'));
// 	printf("%d\n", isdigit('5'));
// 	printf("%d\n", isdigit('a'));
// 	printf("%d\n", isdigit('Z'));
// }
