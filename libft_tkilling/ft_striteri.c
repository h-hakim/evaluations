/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkilling <tkilling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 09:22:46 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/27 15:57:29 by tkilling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <unistd.h>

//void	ft_striteri(char *s, void (*f)(unsigned int, char*));
//void	ft_fun(unsigned int i, char *c);
//void	iter(unsigned int i, char *c);

// int	main(void)
// {
// 	char	str[100] = "LoReM iPsUm";

// 	ft_striteri(str, iter);
// 	printf("%s", str);
// 	return (0);
// }

/*
	uses f() on all char in s
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &(s[i]));
		i++;
	}
}

// void	ft_fun(unsigned int i, char *c)
// {
// 	if (c[i] == ' ')
// 		c[i] = '@';
// }

// void	iter(unsigned int i, char *c)
// {
// 	static int indexArray[11] = {0};

// 	if (i > 10 || indexArray[i] == 1)
// 		write(1, "wrong index\n", 12);
// 	else
// 		indexArray[i] = 1;
// 	if (*c >= 'a' && *c <= 'z')
// 		*c = *c - 32;
// 	else if (*c >= 'A' && *c <= 'Z')
// 		*c = *c + 32;
// }
