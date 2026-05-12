/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copassam <67050115@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 20:56:09 by copassam          #+#    #+#             */
/*   Updated: 2025/09/14 20:25:48 by copassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*dptr;
	const unsigned char		*sptr;
	size_t					i;

	if (!dest && !src)
		return (NULL);
	dptr = (unsigned char *)dest;
	sptr = (const unsigned char *)src;
	if (dptr > sptr)
	{
		i = n;
		while (i > 0)
		{
			i--;
			dptr[i] = sptr[i];
		}
	}
	else
		dest = ft_memcpy(dest, src, n);
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char src1[] = "HelloWorld";
// 	char src2[] = "HelloWorld";

// 	memmove(src1+4, src1, 5);
// 	printf("memcpy : %s\n", src1);

// 	ft_memmove(src2+4, src2, 5);
// 	printf("memmove: %s\n", src2);

//     return 0;
// }
