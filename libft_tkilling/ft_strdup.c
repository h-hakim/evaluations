/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkilling <tkilling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:06:46 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/27 15:08:48 by tkilling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
#include "libft.h"
// char	*ft_strdup(const char *s1);

// int	main(void)
// {
// 	char	*ptr;

// 	ptr = ft_strdup("Hello");
// 	printf("%s\n", ptr);
// 	free((void *)ptr);
// 	return (0);
// }

/*
	duplicates the s1 string
*/

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*ptr;

	i = 0;
	while (s1[i] != '\0')
		i++;
	ptr = (char *)malloc((i + 1) * sizeof(char));
	if (!ptr)
		return (ptr);
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = s1[i];
	return (ptr);
}
