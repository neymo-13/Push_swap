/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copassam <67050115@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 21:23:50 by copassam          #+#    #+#             */
/*   Updated: 2025/09/14 20:26:54 by copassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	if (n == 0)
		return (0);
	i = 0;
	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int main() {
//     unsigned char buf1[] = {1, 2, 3, 4, 5};
//     unsigned char buf2[] = {1, 2, 3, 4, 5};

//     int result = memcmp(buf1, buf2, 5);
// 	printf("%d\n", result);

//     if (result < 0)
//         printf("buf1 < buf2\n");
//     else if (result == 0)
//         printf("buf1 == buf2\n");
//     else
//         printf("buf1 > buf2\n");

//     return 0;
// }