/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copassam <67050115@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 10:39:36 by copassam          #+#    #+#             */
/*   Updated: 2025/09/15 08:54:42 by copassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		result;
	int		sign;
	size_t	i;

	result = 0;
	sign = 1;
	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = (result * 10) + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
// #include <stdio.h>
// #include <stdlib.h>

// int main(void) {
// 	printf("%d\n", atoi("   --123"));   // 0
// 	printf("%d\n", ft_atoi("   --123"));   // 0

//     printf("%d\n", atoi("42"));        // 42
//     printf("%d\n", ft_atoi("42"));        // 42

// 	printf("%d\n", atoi("+99abc"));    // 99
//     printf("%d\n", ft_atoi("+99abc"));    // 99

// 	printf("%d\n", atoi("abc123"));    // 0
//     printf("%d\n", ft_atoi("abc123"));    // 0

// 	return 0;
// }
