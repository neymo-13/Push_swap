/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copassam <67050115@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 23:44:49 by copassam          #+#    #+#             */
/*   Updated: 2025/09/15 08:48:52 by copassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*cur;

	cur = lst;
	while (cur != NULL)
	{
		f(cur->content);
		cur = cur->next;
	}
}

// //test1
// void print_string(void *content)
// {
//     printf("%s\n", (char *)content);
// }

// int main(void)
// {
//     t_list *list = ft_lstnew(strdup("A"));
//     list->next = ft_lstnew(strdup("B"));
//     list->next->next = ft_lstnew(strdup("C"));

//     ft_lstiter(list, print_string);
// }

// //test2
// void increment(void *content)
// {
//     int *p = (int *)content;
//     (*p)++;
// }

// int main(void)
// {
//     int a = 1, b = 2, c = 3;
//     t_list *list = ft_lstnew(&a);
//     list->next = ft_lstnew(&b);
//     list->next->next = ft_lstnew(&c);

//     ft_lstiter(list, increment);

//     printf("%d %d %d\n", a, b, c); // 2 3 4
// }