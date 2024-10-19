/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmichel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:06:56 by thmichel          #+#    #+#             */
/*   Updated: 2024/10/18 13:26:41 by thmichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_countwords(char const *s, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	if (!s || !s[i])
		return (0);
	if (s[i] == c && s[i])
		i++;
	else
	{
		count++;
		i++;
	}
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
			count++;
		i++;
	}
	return (count);
}

void	ft_fill(const char *s, char **split, char c)
{
	size_t	i;
	size_t	j;
	size_t	word_len;

	i = 0;
	j = 0;
	while (s[i] && j < ft_countwords(s, c))
	{
		while (s[i] == c && s[i])
			i++;
		word_len = 0;
		while (s[i + word_len] && s[i + word_len] != c)
			word_len++;
		split[j] = ft_substr(s, i, word_len);
		if (!split[j])
			break ;
		i += word_len;
		j++;
	}
	split[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**split;

	words = ft_countwords(s, c);
	split = malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (NULL);
	if (!s || words == 0)
	{
		split[0] = NULL;
		return (split);
	}
	ft_fill(s, split, c);
	return (split);
}
