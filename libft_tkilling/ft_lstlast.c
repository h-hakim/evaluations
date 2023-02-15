/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkilling <tkilling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:34:39 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/27 11:52:25 by tkilling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst);

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
// 	if (!elem || !elem2 || !elem3 || !elem4)
// 		return (1);
// 	begin = NULL;
// 	ft_lstadd_front(&begin, elem4);
// 	ft_lstadd_front(&begin, elem3);
// 	ft_lstadd_front(&begin, elem2);
// 	ft_lstadd_front(&begin, elem);
// 	begin = ft_lstlast(begin);
// 	return (0);
// }

/*
	Returns the last node of the list
	node = on block of a linked list
*/

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
