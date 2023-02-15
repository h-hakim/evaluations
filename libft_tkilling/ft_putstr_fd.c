/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkilling <tkilling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:37:17 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/27 12:57:38 by tkilling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd);

// int	main(void)
// {
// 	ft_putstr_fd("Hello bla", 1);
// 	return (0);
// }

/*
	Prints the string ’s’ to the given 
	file descriptor (fd)
*/

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
		write(fd, &(s[i++]), 1);
}
