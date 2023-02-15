/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jharrach <jharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 23:03:55 by jharrach          #+#    #+#             */
/*   Updated: 2022/10/24 22:15:03 by jharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*r;
	size_t	len;

	len = ft_strlen(s1) + 1;
	r = (char *)malloc(sizeof(char) * len);
	if (!r)
		return (0);
	ft_strlcpy(r, s1, len);
	return (r);
}
