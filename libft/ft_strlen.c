/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copassam <67050115@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:06:55 by copassam          #+#    #+#             */
/*   Updated: 2025/09/10 21:05:12 by copassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (s[length] != '\0')
		length++;
	return (length);
}

// #include <stdio.h>
// int main(void) {
//     const char *str1 = "Hello, world!";
//     const char *str2 = "";

//     size_t len1 = ft_strlen(str1);
//     size_t len2 = ft_strlen(str2);

//     printf("The string is: \"%s\"\n", str1);
//     printf("Its length is: %lu\n\n", len1); //13

//     printf("The string is: \"%s\"\n", str2);
//     printf("Its length is: %lu\n", len2);   //0

//     return 0;
// }
