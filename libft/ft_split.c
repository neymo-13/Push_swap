/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copassam <copassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 11:50:48 by copassam          #+#    #+#             */
/*   Updated: 2025/09/15 13:52:49 by copassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *str, char c)
{
	size_t	i;
	int		count;
	int		in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (str[i])
	{
		if (str[i] == c)
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		i++;
	}
	return (count);
}

static char	*ft_add_word(const char *str, char c, size_t *j)
{
	char	*word;
	size_t	i;
	size_t	len;

	i = *j;
	len = 0;
	while (str[i] && str[i] != c)
	{
		i++;
		len++;
	}
	word = (char *)malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[*j + i];
		i++;
	}
	*j += len;
	word[i] = '\0';
	return (word);
}

static void	ft_free_all(char **res, int i)
{
	while (--i >= 0)
		free(res[i]);
	free(res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	j;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_count_words(s, c);
	res = (char **) malloc((size + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = -1;
	j = 0;
	while (++i < size)
	{
		while (s[j] && s[j] == c)
			j++;
		res[i] = ft_add_word(s, c, &j);
		if (res[i] == NULL)
			return (ft_free_all(res, i), NULL);
	}
	res[i] = NULL;
	return (res);
}

// #include <stdio.h>

// int main(void)
// {
// 	char **tab;
// 	int i;

// 	tab = ft_split("loremr. Cs a, semper congue, euismod non, mi.", 'i');
// 	if (!tab)
// 		return (1);
// 	i = 0;
// 	while (tab[i])
// 	{
// 		printf("[%s]\n", tab[i]);
// 		free(tab[i]);
// 		i++;
// 	}
// 	free(tab);
// }
