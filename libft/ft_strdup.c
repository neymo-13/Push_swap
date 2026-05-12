/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copassam <67050115@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 06:11:17 by copassam          #+#    #+#             */
/*   Updated: 2025/09/14 06:39:53 by copassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;
	size_t	i;

	len = ft_strlen(s);
	dup = (char *)malloc(len + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// #include <stdio.h>

// int main(void)
// {
//     char *str = "hahahaha";
//     char *copy = ft_strdup(str);

//     if (copy == NULL) {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }

//     printf("Original: %s\n", str);
//     printf("Copy    : %s\n", copy);

//     free(copy);
//     return 0;
// }