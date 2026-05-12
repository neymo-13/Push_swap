/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copassam <67050115@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 21:06:24 by copassam          #+#    #+#             */
/*   Updated: 2025/09/14 20:19:34 by copassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char) c;
		i++;
	}
	return (s);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char buffer_my[0];
//     char buffer_sys[0];

//     ft_memset(buffer_my, 'a', sizeof(buffer_my));
//     memset(buffer_sys, 'a', sizeof(buffer_sys));

//     if (memcmp(buffer_my, buffer_sys, sizeof(buffer_my)) == 0) {
//         printf("same\n");
//     } else {
//         printf("wrong\n");
//     }
//     return 0;
// }
