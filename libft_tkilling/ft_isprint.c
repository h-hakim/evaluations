/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkilling <tkilling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:03:29 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/19 14:28:22 by tkilling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

//int ft_isprint(int c);

// int main(void)
// {
//     int x;

//     x = 0;
//     while (x < 200)
//     {
//         printf("%d\t", ft_isprint(x));
//         printf("%d\n", isprint(x));
//         x++;
//     }
//     return (0);
// }

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
