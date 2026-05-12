/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copassam <67050115@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 22:22:09 by copassam          #+#    #+#             */
/*   Updated: 2025/09/14 20:23:15 by copassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dptr;
	const unsigned char	*sptr;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	dptr = (unsigned char *) dest;
	sptr = (const unsigned char *) src;
	i = 0;
	while (i < n)
	{
		dptr[i] = sptr[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char src1[] = "HelloWorld";
//     char src2[] = "HelloWorld";

//     ft_memcpy(src1+5, src1, 5);   // อาจผิด เพราะ overlap
//     printf("memcpy : %s\n", src1);

//     ft_memmove(src2+5, src2, 5);  // ปลอดภัย
//     printf("memmove: %s\n", src2);

//     return 0;
// }
