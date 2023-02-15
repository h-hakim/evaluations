/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkilling <tkilling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:43:04 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/19 14:35:29 by tkilling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

//int ft_isalnum(int c);

// int main(void)
// {
//     printf("%d\n", isalnum(96));
//     printf("%d\n", ft_isalnum(96));
// }

/*
	is alpha or num?
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
