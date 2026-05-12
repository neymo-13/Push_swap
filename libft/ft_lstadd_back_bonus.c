/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copassam <67050115@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 23:00:30 by copassam          #+#    #+#             */
/*   Updated: 2025/09/15 09:15:48 by copassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*cur;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	cur = *lst;
	while (cur->next)
		cur = cur->next;
	cur->next = new;
}

// #include <stdio.h>

// int main(void)
// {
//     t_list *list = ft_lstnew("A");
// 	ft_lstadd_back(&list, ft_lstnew("B"));
// 	ft_lstadd_back(&list, ft_lstnew("C"));

//     t_list *temp = list;
//     while (temp)
//     {
//         printf("%s\n", (char *)temp->content);
//         temp = temp->next;
//     }
// }
