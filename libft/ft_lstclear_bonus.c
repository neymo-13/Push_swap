/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copassam <copassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 23:27:43 by copassam          #+#    #+#             */
/*   Updated: 2025/09/15 14:46:57 by copassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nextt;
	t_list	*cur;

	if (!lst || !del)
		return ;
	cur = *lst;
	while (cur != NULL)
	{
		nextt = cur->next;
		ft_lstdelone(cur, del);
		cur = nextt;
	}
	*lst = NULL;
}

// #include <stdio.h>

// void del_string(void *content)
// {
//     free(content);
// }

// int main(void)
// {
//     t_list *list = ft_lstnew(ft_strdup("A"));
//     list->next = ft_lstnew(ft_strdup("B"));
//     list->next->next = ft_lstnew(ft_strdup("C"));

//     ft_lstclear(&list, del_string);

//     if (!list)
//         printf("List cleared!\n");
// }