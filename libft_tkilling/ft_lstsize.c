/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkilling <tkilling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:18:09 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/27 12:16:42 by tkilling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst);

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
// 	printf("%d", ft_lstsize(begin));
// 	while (begin)
// 	{
// 		ft_print_result(begin);
// 		begin = begin->next;
// 	}
// 	return (0);
// }

/*
	counts the size of a list
*/

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 1;
	if (!lst)
		return (0);
	while (lst->next != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
