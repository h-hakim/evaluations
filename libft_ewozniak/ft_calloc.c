/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewozniak <ewozniak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 20:34:09 by ewozniak          #+#    #+#             */
/*   Updated: 2022/12/16 20:34:09 by ewozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	ptr = malloc(size * n);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, n * size);
	return (ptr);
}

// int main()
// {
// 	int i, n;
// 	int *a;

// 	printf("Number of integer blocks to be entered:");
// 	scanf("%d",&n);

// 	a = (int *)ft_calloc(n, sizeof(int));
// 	printf("Enter %d numbers:\n",n);
//    	for( i=0 ; i < n ; i++ ) {
//     	scanf("%d",&a[i]);
//    	}

//    	printf("The numbers entered are: ");
//    	for( i=0 ; i < n ; i++ ) {
//     	printf("%d ",a[i]);
//    	}
//    	free(a);
// 	return (0);
// }