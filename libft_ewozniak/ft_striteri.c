/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:57:58 by ewozniak          #+#    #+#             */
/*   Updated: 2022/12/20 23:07:46 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	index;

	index = 0;
	if (s && f)
	{
		while (s[index] != '\0')
		{
			f(index, s + index);
			index++;
		}
	}
}

// static void	putchr(unsigned int index, char *ptr)
// {
// 	write(1, &ptr[index], 1);
// }

// int	main(void)
// {
// 	ft_striteri("hello", putchr);
// 	return (0);
// }