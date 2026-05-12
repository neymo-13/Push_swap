/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copassam <67050115@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 11:34:03 by copassam          #+#    #+#             */
/*   Updated: 2025/09/15 09:04:20 by copassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>

// int main(void) {
// 	printf("%d\n", isascii('a'));
// 	printf("%d\n", ft_isascii('a'));

//     printf("%d\n", isascii('Z'));
//     printf("%d\n", ft_isascii('Z'));

// 	printf("%d\n", isascii('?'));
// 	printf("%d\n", ft_isascii('?'));

// 	printf("%d\n", isascii('7'));
// 	printf("%d\n", ft_isascii('7'));

// 	return 0;
// }
