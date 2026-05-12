/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copassam <67050115@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 23:16:55 by copassam          #+#    #+#             */
/*   Updated: 2025/09/14 20:22:02 by copassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while (big[i + j] != '\0' && big[i + j] == little[j] && (i + j) < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *) &big[i]);
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int main(void)
// {
//     const char *text = "Hello World!";
//     const char *sub = "World";

//     char *res1 = ft_strnstr(text, sub, 12);
//     char *res2 = ft_strnstr(text, sub, 5);

//     if (res1)
//         printf("Found: %s\n", res1);
//     else
//         printf("Not found\n");

//     if (res2)
//         printf("Found: %s\n", res2);
//     else
//         printf("Not found\n");

//     return 0;
// }