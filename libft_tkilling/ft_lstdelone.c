/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkilling <tkilling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:26:00 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/27 11:43:54 by tkilling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*));

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
// 	while (begin)
// 	{
// 		ft_print_result(begin);
// 		begin = begin->next;
// 	}
// 	return (0);
// }

/*
	the del"function" delets(frees) the content
*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
