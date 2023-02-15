/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkilling <tkilling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:27:58 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/27 11:48:24 by tkilling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *));

// int	main(void)
// {
// 	return (0);
// }

/*
	use f() on every content of the linked list
*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	f((void *)lst->content);
	while (lst->next != NULL)
	{
		lst = lst->next;
		f((void *)lst->content);
	}
}
