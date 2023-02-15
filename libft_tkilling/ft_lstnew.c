/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkilling <tkilling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:56:37 by tkilling          #+#    #+#             */
/*   Updated: 2022/10/27 12:16:02 by tkilling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content);

// int	main(void)
// {
// 	t_list	*ptr;

// 	ptr = ft_lstnew("Hello");
// 	if (!ptr)
// 		return 1;
// 	printf("%s", ptr->content);
// 	free(ptr);
// 	return (0);
// }

/*
	creates a new t_list with given content
	and next = NULL
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = (t_list *)malloc(sizeof(t_list));
	if (head == NULL)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}
