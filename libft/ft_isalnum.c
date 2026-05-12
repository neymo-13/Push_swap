/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copassam <67050115@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 11:18:26 by copassam          #+#    #+#             */
/*   Updated: 2025/09/15 09:00:33 by copassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>

// int main(void) {
// 	printf("%d\n", isalnum('a'));
// 	printf("%d\n", ft_isalnum('a'));

//     printf("%d\n", isalnum('Z'));
//     printf("%d\n", ft_isalnum('Z'));

// 	printf("%d\n", isalnum('?'));
// 	printf("%d\n", ft_isalnum('?'));

// 	printf("%d\n", isalnum('7'));
// 	printf("%d\n", ft_isalnum('7'));

// 	return 0;
// }
