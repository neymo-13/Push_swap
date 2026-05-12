/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copassam <67050115@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 23:50:31 by copassam          #+#    #+#             */
/*   Updated: 2025/09/15 08:48:58 by copassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*cur;

	cur = lst;
	if (!cur)
		return (NULL);
	while (cur->next)
		cur = cur->next;
	return (cur);
}

// int main(void)
// {
//     t_list *list = ft_lstnew("B");
//     ft_lstadd_front(&list, ft_lstnew("A"));
//     ft_lstadd_front(&list, ft_lstnew("Start"));

//     t_list *temp = ft_lstlast(list);
//     while (temp)
//     {
//         printf("%s\n", (char *)temp->content);
//         temp = temp->next;
//     }
// }