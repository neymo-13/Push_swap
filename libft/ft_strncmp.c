/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copassam <67050115@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 20:31:05 by copassam          #+#    #+#             */
/*   Updated: 2025/09/14 20:26:23 by copassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char s1[] = "hela";
// 	char s2[] = "hella";
// 	int ans;
// 	ans = ft_strncmp(s1, s2, 4);
// 	ans = strncmp(s1, s2, 5);
// 	printf("%d", ans);	
// }
