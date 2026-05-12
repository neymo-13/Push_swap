/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copassam <copassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 20:59:46 by copassam          #+#    #+#             */
/*   Updated: 2025/09/15 16:58:00 by copassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;

	ptr = (const unsigned char *)s;
	while (n > 0)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
		n--;
	}
	return (NULL);
}

// #include <stdio.h>

// int main() {
//     char buffer[] = {1, 2, 3, 4, 5};
//     char *p;

//     p = ft_memchr(buffer, 3, sizeof(buffer));
//     if (p)
//         printf("Found at %ld\n", p - buffer);
//     else
//         printf("not found\n");

//     p = ft_memchr(buffer, 6, sizeof(buffer));
//     if (!p)
//         printf("not found\n");

//     return 0;
// }
