/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copassam <67050115@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 18:22:10 by copassam          #+#    #+#             */
/*   Updated: 2025/09/13 18:52:14 by copassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	if (dsize > 0)
	{
		i = 0;
		while (i + 1 < dsize && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}

// #include <stdio.h>

// int main(void)
// {
// 	char src[] = "Hello, World!";
// 	char dst[6];
// 	size_t ret;

// 	ret = ft_strlcpy(dst, src, sizeof(dst));
// 	printf("dst = \"%s\"\n", dst);
// 	printf("src length = %zu\n", ret); // 13
// 	if (ret >= sizeof(dst))
// 		printf("Warning: truncated!\n");
// }