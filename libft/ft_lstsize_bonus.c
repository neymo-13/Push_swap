/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copassam <67050115@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 23:38:12 by copassam          #+#    #+#             */
/*   Updated: 2025/09/15 08:49:10 by copassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*cur;
	int		size;

	cur = lst;
	size = 0;
	while (cur)
	{
		size++;
		cur = cur->next;
	}
	return (size);
}

// int main(void)
// {
//     t_list *list = ft_lstnew("B");
//     ft_lstadd_front(&list, ft_lstnew("A"));
//     ft_lstadd_front(&list, ft_lstnew("Start"));

// 	int size = ft_lstsize(list);
//     printf("%d\n", size);
// 	t_list *tmp;
//     while (list)
//     {
//         tmp = list->next;
//         free(list);
//         list = tmp;
//     }
//     return 0;

// }