/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkilling <tkilling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:34:11 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/27 10:22:30 by tkilling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

//int ft_isalpha(int c);

/*
int main(void)
{
	printf("%d\n", isalpha(91));
	printf("%d\n", ft_isalpha(91));
	return (0);
}
*/

/*
	is alphabet?
*/

int	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
