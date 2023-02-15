/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkilling <tkilling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:00:39 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/27 11:43:24 by tkilling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *));

// void	*delete(void *x)
// {
// 	free(x);
// }

// int	main(void)
// {
// 	t_list	*begin;
// 	t_list	*elem;
// 	t_list	*elem2;
// 	t_list	*elem3;
// 	t_list	*elem4;
// 	char	*str = strdup("lorem");
// 	char	*str2 = strdup("ipsum");
// 	char	*str3 = strdup("dolor");
// 	char	*str4 = strdup("sit");

// 	elem = ft_lstnew((void *)str);
// 	elem2 = ft_lstnew((void *)str2);
// 	elem3 = ft_lstnew((void *)str3);
// 	elem4 = ft_lstnew((void *)str4);
// 	ft_lstclear(&str3, &del)
// }

/*
	del the linked list (all successor of the list)
	and set *lst to NULL;
*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		ptr = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = ptr;
	}
}
