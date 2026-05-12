/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copassam <67050115@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 12:42:45 by copassam          #+#    #+#             */
/*   Updated: 2025/09/14 20:24:24 by copassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>

// int main() {
// 	char c1 = 'A';
// 	char c2 = 'b';
// 	char c3 = '3';

// 	printf("sys = %c", toupper(c1));
// 	printf("\nmy  = %c\n\n", ft_toupper(c1));

// 	printf("sys = %c", toupper(c2));
// 	printf("\nmy  = %c\n\n", ft_toupper(c2));

// 	printf("sys = %c", toupper(c3));
// 	printf("\nmy  = %c\n\n", ft_toupper(c3));	
// }