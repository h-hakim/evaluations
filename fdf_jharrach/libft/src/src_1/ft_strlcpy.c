/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jharrach <jharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 19:28:14 by jharrach          #+#    #+#             */
/*   Updated: 2022/10/25 16:42:10 by jharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	r;

	r = ft_strlen(src);
	if (!dstsize)
		return (r);
	while (--dstsize && *src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = 0;
	return (r);
}
