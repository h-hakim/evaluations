/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkilling <tkilling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:40:20 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/27 12:10:26 by tkilling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

// void	*f1(void *x)
// {
// 	if ()
// 	return (x);
// }

// void	del(void *x)
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
// 	if (!elem || !elem2 || !elem3 || !elem4)
// 		return (1);
// 	ft_lstadd_front(&begin, elem);
// 	ft_lstadd_front(&begin, elem2);
// 	ft_lstadd_front(&begin, elem3);
// 	ft_lstadd_front(&begin, elem4);

// 	ft_lstmap(elem2, &f1, &del1)
// }

/*
	creates a new linked list of t_list type
	whith the new content after f();
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*head;

	if (!lst || !f || !del)
		return (NULL);
	head = ft_lstnew(f(lst->content));
	if (!head)
		return (NULL);
	ptr = head;
	while (lst->next != NULL)
	{
		lst = lst->next;
		ptr = ft_lstnew(f(lst->content));
		if (!ptr)
		{
			ft_lstclear(&head, del);
			return (head);
		}
		ft_lstadd_back(&head, ptr);
	}
	return (head);
}
