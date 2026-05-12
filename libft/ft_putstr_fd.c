/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copassam <67050115@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 15:35:39 by copassam          #+#    #+#             */
/*   Updated: 2026/04/16 05:40:53 by copassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	size;

	if (s == NULL || fd < 0)
		return ;
	size = ft_strlen(s);
	write(fd, s, size);
}

// int main()
// {
// 	ft_putstr_fd("Hello, World!\n", 1);
// 	ft_putstr_fd("Error!\n", 2);
// }
