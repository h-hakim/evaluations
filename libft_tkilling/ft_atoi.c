/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkilling <tkilling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 09:53:17 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/27 10:15:01 by tkilling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

//int	ft_atoi(const char *str);

// int	main(void)
// {
// 	printf("%d\n", ft_atoi(" \t\n\v\f\r 0bb"));
// 	printf("%d\n", atoi(" \t\n\v\f\r 0bb"));
//	return (0);
// }

/*
	converts an (char *)str to int
*/

int	ft_atoi(const char *str)
{
	int	i;
	int	nbr;
	int	minus_check;
	int	count;

	i = 0;
	nbr = 0;
	count = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			minus_check = -1;
	while (str[i] != '\0' && str[i] >= 48 && str[i] <= 57)
	{
		if (count == 19 && minus_check == -1)
			return (0);
		else if (count++ == 19)
			return (-1);
		if (minus_check == -1)
			nbr = nbr * 10 - (str[i++] - 48);
		else
			nbr = nbr * 10 + (str[i++] - 48);
	}
	return (nbr);
}
