/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copassam <67050115@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 20:12:05 by copassam          #+#    #+#             */
/*   Updated: 2025/09/14 20:20:33 by copassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s != '\0')
	{
		if (*s == (char )c)
			last = s;
		s++;
	}
	if ((char )c == '\0')
		return ((char *) s);
	return ((char *)last);
}

// #include <stdio.h>

// int main() {
//     const char *str = "Hello, world!";
//     char *p;

//     p = ft_strrchr(str, 'o');
//     if (p)
//         printf("Found at : %ld\n", p - str); // idx
//     else
//         printf("not found\n");

//     p = ft_strrchr(str, '\0');
//     printf("Pointer to '\\0': %ld\n", p - str);

//     return 0;
// }
