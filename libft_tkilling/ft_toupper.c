/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkilling <tkilling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:16:36 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/27 15:56:32 by tkilling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int ft_toupper(int c);

// int	main(void)
// {
// 	printf("%c\n", ft_toupper('A'));
// 	return (0);
// }

/*
	makes the c uppercase
*/

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}
