/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:35:43 by ewozniak          #+#    #+#             */
/*   Updated: 2022/12/20 21:51:06 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///  checck for spae returns 0 if false
static int	ft_checkspace(char c)
{
	if (c == ' '||  

		c == '\t' || 

		c =='\n'||  

		c == '\r'||  

		c == '\f' ||

		c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	is_negative;
	int	result;

	i = 0;
	is_negative = -1 * (str[i] == '-') + (str[i] != '-');
	while(ft_checkspace(str[i]) && ++i);
	if (is_negative == -1 && ++i)
		;
	result = 0;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * is_negative);
}

// int	main(void)
// {
// 	printf("ft_atoi:\n%d\n", ft_atoi("-2344"));
// 	printf("%d\n", ft_atoi("1244"));
// 	printf("%d\n", ft_atoi("0"));

// 	printf("atoi:\n%d\n", atoi("-2344"));
// 	printf("%d\n", atoi("1244"));
// 	printf("%d\n", atoi("0"));
// 	return (0);
// }
