/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkilling <tkilling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:03:56 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/27 10:18:50 by tkilling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
#include "libft.h"
// #include <stdint.h>

// void	*ft_calloc(size_t count, size_t size);

// int	main(void)
// {
// 	int	*ptr;
// 	int		i;

// 	i = 0;
// 	ptr = (int *)ft_calloc(4294967293, 2);
// 	while (i < 3 && ptr != NULL)
// 	{
// 		printf("%d ", ptr[i]);
// 		i++;
// 	}
// 	if (ptr)
// 		free((void *)ptr);
// 	return (0);
// }
	// if ((count * size) > )
	// 	return (NULL);

/*
	allocats mem and set the mem to 0
*/

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	if (count + size > 4294967295 || count * size > 4294967295)
		return (NULL);
	ptr = (char *)malloc(count * size);
	if (!(ptr))
		return (NULL);
	while (i < (count * size))
		ptr[i++] = '\0';
	return ((void *)ptr);
}
