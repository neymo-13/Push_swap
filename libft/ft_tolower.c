/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copassam <67050115@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 12:33:57 by copassam          #+#    #+#             */
/*   Updated: 2025/09/14 20:20:44 by copassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>

// int main() {
// 	char c1 = 'A';
// 	char c2 = 'b';
// 	char c3 = '3';

// 	printf("sys = %c", tolower(c1));
// 	printf("\nmy  = %c\n\n", ft_tolower(c1));

// 	printf("sys = %c", tolower(c2));
// 	printf("\nmy  = %c\n\n", ft_tolower(c2));

// 	printf("sys = %c", tolower(c3));
// 	printf("\nmy  = %c\n\n", ft_tolower(c3));	
// }