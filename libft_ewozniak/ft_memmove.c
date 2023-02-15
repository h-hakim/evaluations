/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewozniak <ewozniak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 20:34:42 by ewozniak          #+#    #+#             */
/*   Updated: 2022/12/16 20:34:42 by ewozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*source;
	char		*destination;
	const char	*decrsrc;
	char		*decrdest;

	source = src;
	destination = dest;
	if (destination < source)
	{
		while (n--)
			*destination++ = *source++;
	}
	else
	{
		decrsrc = source + (n - 1);
		decrdest = destination + (n - 1);
		while (n--)
			*decrdest-- = *decrsrc--;
	}
	return (dest);
}

// int main()
// { 
//     char str[100] = "0123456789";
//     char str2[100] = "0123456789";

//     printf("ft_memmove:\nStr before: %s\n", str);
//     ft_memmove(str + 2, str, 4);
//     printf("Str after: %s\n", str);

//     printf("memmove:\nStr before: %s\n", str2);
//     memmove(str2 + 2, str2, 4);
//     printf("Str after: %s\n", str2);

//     return (0);
// }