/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copassam <67050115@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 14:34:01 by copassam          #+#    #+#             */
/*   Updated: 2025/09/15 09:06:39 by copassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	num;

	num = n;
	len = ft_intlen(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num == 0)
		str[0] = '0';
	else if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}

// #include <stdio.h>

// int main() {
// 	printf("%s\n", ft_itoa(0));        // "0"
// 	printf("%s\n", ft_itoa(42));       // "42"
// 	printf("%s\n", ft_itoa(-42));      // "-42"
// 	printf("%s\n", ft_itoa(2147483647));   // "2147483647"
// 	printf("%s\n", ft_itoa(-2147483648));  // "-2147483648"

// }