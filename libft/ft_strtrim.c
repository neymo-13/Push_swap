/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copassam <67050115@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 06:55:17 by copassam          #+#    #+#             */
/*   Updated: 2025/09/14 20:26:09 by copassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_charset(char c, char const *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*trim;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_is_charset(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_is_charset(s1[end - 1], set))
		end--;
	trim = (char *) malloc(end - start + 1);
	if (!trim)
		return (NULL);
	i = 0;
	while (start < end)
		trim[i++] = s1[start++];
	trim[i] = '\0';
	return (trim);
}

// #include <stdio.h>

// int main() {
// 	char *res = ft_strtrim("   hello   ", NULL);
// 	if (res == NULL)
// 		printf("NULL\n");
// 	else
// 		printf("%s\n", res);

// 	res = ft_strtrim("   hello   ", " ");
// 	printf(">%s<\n", res);   // >hello<
// 	free(res);

// 	res = ft_strtrim("foobar", "fr");
// 	printf(">%s<\n", res);   // >ooba<
// 	free(res);
// }
