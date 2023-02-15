/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewozniak <ewozniak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:59:12 by ewozniak          #+#    #+#             */
/*   Updated: 2022/12/19 21:27:49 by ewozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c < 127);
}

// int	main(void)
// {
// 	printf("ft_isprint:\n%d\n", ft_isprint(127));
// 	printf("%d\n", ft_isprint(55));

// 	printf("isprint:\n%d\n", isprint(127));
// 	printf("%d\n", isprint(55));
// }
