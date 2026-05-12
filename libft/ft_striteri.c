/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copassam <67050115@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 15:18:52 by copassam          #+#    #+#             */
/*   Updated: 2025/09/14 20:19:06 by copassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void	to_upper(unsigned int i, char *c)
// {
// 	(void)i;
// 	*c = ft_toupper(*c);
// }
// int main()
// {
// 	char str[] = "hello world";
// 	ft_striteri(str, to_upper);
// 	printf("%s\n", str);
// }
