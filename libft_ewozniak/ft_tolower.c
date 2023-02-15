/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewozniak <ewozniak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:10:29 by ewozniak          #+#    #+#             */
/*   Updated: 2022/12/19 21:29:13 by ewozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	return ((c + 32) * (c >= 65 && c <= 90) + c * (c < 65 || c > 90));
}

// int	main(void)
// {
// 	printf("ft_tolower:\n%c\n", ft_tolower('A'));
// 	printf("%c\n", ft_tolower('a'));

// 	printf("tolower:\n%c\n", tolower('A'));
// 	printf("%c\n", tolower('a'));
// }
