/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkilling <tkilling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:50:00 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/19 14:23:28 by tkilling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

//int ft_isdigit(int c);

/*
int main(void)
{
	int x;

	x = 58;
	printf("%d\n", ft_isdigit(x));
	printf("%d\n", isdigit(x));
	return (0);
}
*/

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
