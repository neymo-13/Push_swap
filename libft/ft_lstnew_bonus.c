/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copassam <67050115@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 23:00:01 by copassam          #+#    #+#             */
/*   Updated: 2025/09/15 08:49:16 by copassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// int main(void)
// {
//     t_list *node;

//     node = ft_lstnew("Hello, 42!");
//     if (node)
//     {
//         printf("Content: %s\n", (char *)node->content);
//         printf("Next: %p\n", (void *)node->next);
//     }
// }