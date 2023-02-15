/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewozniak <ewozniak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:59:12 by ewozniak          #+#    #+#             */
/*   Updated: 2022/12/19 21:27:43 by ewozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// int	main(void)
// {
// 	printf("ft_isascii:\n%d\n", ft_isascii(128));
// 	printf("%d\n", ft_isascii(55));

// 	printf("isascii:\n%d\n", ft_isascii(128));
// 	printf("%d\n", ft_isascii(55));
// }
