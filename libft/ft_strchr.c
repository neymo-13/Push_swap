/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copassam <67050115@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 19:45:14 by copassam          #+#    #+#             */
/*   Updated: 2025/09/14 20:28:17 by copassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char )c)
			return ((char *) &s[i]);
		i++;
	}
	if ((char )c == '\0')
		return ((char *) &s[i]);
	return (NULL);
}

// #include <stdio.h>

// int main() {
//     const char *str = "Hello, world!";
//     char *p;

//     p = ft_strchr(str, 'o');
//     if (p)
//         printf("Found at : %ld\n", p - str); // idx
//     else
//         printf("not found\n");

//     p = ft_strchr(str, '\0');
//     printf("Pointer to '\\0': %ld\n", p - str);

//     return 0;
// }
