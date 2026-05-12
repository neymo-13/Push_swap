/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copassam <67050115@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 11:34:48 by copassam          #+#    #+#             */
/*   Updated: 2025/09/15 09:05:19 by copassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>

// int main(void) {
// 	printf("%d\n", isdigit('a'));
// 	printf("%d\n", ft_isdigit('a'));

//     printf("%d\n", isdigit('Z'));
//     printf("%d\n", ft_isdigit('Z'));

// 	printf("%d\n", isdigit('?'));
// 	printf("%d\n", ft_isdigit('?'));

// 	printf("%d\n", isdigit('7'));
// 	printf("%d\n", ft_isdigit('7'));

// 	return 0;
// }
