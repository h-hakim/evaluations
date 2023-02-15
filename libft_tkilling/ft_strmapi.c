/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkilling <tkilling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:32:50 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/27 15:33:46 by tkilling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
// char	ft_fun(unsigned int i, char c);

// int	main(void)
// {
// 	char	*ptr;

// 	ptr = ft_strmapi("", ft_fun);
// 	printf("%s", ptr);
// 	free(ptr);
// 	return (0);
// }

/*
	Applies the function ’f’ to each 
	character of the string ’s’.
	create a new string (with malloc) resulting
	from successive applications of ’f’.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	char			*ptr2;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	ptr2 = (char *)s;
	i = 0;
	while (s[i] != '\0')
		i++;
	ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
		return (ptr);
	i = 0;
	while (s[i] != '\0')
	{
		ptr[i] = f(i, ptr2[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// char	ft_fun(unsigned int i, char c)
// {
// 	return (c - i);
// }
