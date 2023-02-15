/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:54:56 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/27 20:08:40 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new);

// void	ft_print_result(t_list *elem)
// {
// 	int	len;

// 	len = 0;
// 	while (((char *)elem->content)[len])
// 		len++;
// 	write(1, elem->content, len);
// 	write(1, "\n", 1);
// }

// int	main(void)
// {
// 	t_list	*begin;
// 	t_list	*elem;
// 	t_list	*elem2;
// 	t_list	*elem3;
// 	t_list	*elem4;
// 	//char	*str = strdup("lorem");
// 	//char	*str2 = strdup("ipsum");
// 	char	*str3 = strdup("dolor");
// 	char	*str4 = strdup("sit");
// 	char	*str2 = strdup("ipsum");
// 	char	*str = strdup("lorem");

// 	elem = ft_lstnew((void *)str);
// 	elem2 = ft_lstnew((void *)str2);
// 	elem3 = ft_lstnew((void *)str3);
// 	elem4 = ft_lstnew((void *)str4);
// 	if (!elem || !elem2 || !elem3 || !elem4)
// 		return (1);
// 	begin = NULL;
// 	ft_lstadd_front(&begin, elem4);
// 	ft_lstadd_front(&begin, elem3);
// 	ft_lstadd_back(&begin, elem2);
// 	ft_lstadd_back(&begin, elem);
// 	while (begin)
// 	{
// 		ft_print_result(begin);
// 		begin = begin->next;
// 	}
// 	return (0);
// }

/*
	add a t_list at the back of a linked list
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
		ft_lstadd_front(lst, new);
	else
	{
		ptr = ft_lstlast(*lst);
		ptr->next = new;
	}
}
