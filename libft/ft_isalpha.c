/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copassam <67050115@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 11:32:50 by copassam          #+#    #+#             */
/*   Updated: 2025/09/15 09:03:30 by copassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>

// int main(void) {
// 	printf("%d\n", isalpha('a'));
// 	printf("%d\n", ft_isalpha('a'));

//     printf("%d\n", isalpha('Z'));
//     printf("%d\n", ft_isalpha('Z'));

// 	printf("%d\n", isalpha('?'));
// 	printf("%d\n", ft_isalpha('?'));

// 	printf("%d\n", isalpha('7'));
// 	printf("%d\n", ft_isalpha('7'));

// 	return 0;
// }
