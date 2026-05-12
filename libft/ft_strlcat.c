/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copassam <copassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 18:53:09 by copassam          #+#    #+#             */
/*   Updated: 2025/09/15 13:19:28 by copassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	if (dlen >= dsize)
		return (dsize + slen);
	i = dlen;
	j = 0;
	while (i + 1 < dsize && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dlen + slen);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char buf[11] = "a";
//     size_t ret;

//     ret = ft_strlcat(buf, "lorem", 15);

//     printf("buf = \"%s\"\n", buf);
//     printf("return = %zu\n", ret);

//     // ret = strlcat(buf, "lorem", 15);
//     // printf("\nbuf = \"%s\"\n", buf);
//     // printf("return = %zu\n", ret);
// }
