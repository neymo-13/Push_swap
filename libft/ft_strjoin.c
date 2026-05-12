/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copassam <67050115@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 06:42:32 by copassam          #+#    #+#             */
/*   Updated: 2025/09/14 20:22:54 by copassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*arr;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	arr = (char *) malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!arr)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		arr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		arr[i + j] = s2[j];
		j++;
	}
	arr[i + j] = '\0';
	return (arr);
}

// #include <stdio.h>

// int main(void)
// {
//     char *s1 = "Hello, ";
//     char *s2 = "World!";
//     char *joined = ft_strjoin(s1, s2);

//     if (joined)
//     {
//         printf("Joined string: %s\n", joined);
//         free(joined);
//     }
//     return 0;
// }
