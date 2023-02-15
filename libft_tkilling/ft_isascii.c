/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkilling <tkilling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:55:31 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/19 14:27:48 by tkilling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

//int ft_isascii(int c);

// int main(void)
// {
//     printf("%d\n", isascii(-1));
//     printf("%d\n", ft_isascii(-1));
//     return (0);
// }

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
