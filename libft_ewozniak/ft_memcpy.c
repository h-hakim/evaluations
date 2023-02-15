/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewozniak <ewozniak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 21:27:56 by ewozniak          #+#    #+#             */
/*   Updated: 2022/12/16 21:27:56 by ewozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*source;
	char		*destination;

	source = src;
	destination = dest;
	while (n--)
	{
		*destination++ = *source++;
	}
	return (dest);
}

// int main()
// {
//     char src[100] = "abc";
//     char dest[100] = "def";

//     printf("ft_memcpy:\nDest before: %s\n", dest);
//     ft_memcpy(dest, src, 3);
//     printf("Dest after: %s\n", dest);

// 	char src2[100] = "abc";
//     char dest2[100] = "def";

//     printf("memcpy:\nDest before: %s\n", dest2);
//     memcpy(dest2, src2, 3);
//     printf("Dest after: %s\n", dest2);
//     return (0);
// }