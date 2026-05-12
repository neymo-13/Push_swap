/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copassam <67050115@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 23:15:46 by copassam          #+#    #+#             */
/*   Updated: 2025/09/15 08:48:46 by copassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// void del_string(void *content)
// {
//     free(content);
// }

// int main(void)
// {
//     t_list *node = malloc(sizeof(t_list));
//     node->content = malloc(10);
//     node->next = NULL;

//     ft_lstdelone(node, del_string);
// }
