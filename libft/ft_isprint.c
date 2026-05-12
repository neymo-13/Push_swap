/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copassam <67050115@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 11:35:07 by copassam          #+#    #+#             */
/*   Updated: 2025/09/15 09:05:58 by copassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>

// int main(void) {
// 	printf("%d\n", isprint('a'));
// 	printf("%d\n", ft_isprint('a'));

//     printf("%d\n", isprint('Z'));
//     printf("%d\n", ft_isprint('Z'));

// 	printf("%d\n", isprint('?'));
// 	printf("%d\n", ft_isprint('?'));

// 	printf("%d\n", isprint('7'));
// 	printf("%d\n", ft_isprint('7'));

// 	return 0;
// }
