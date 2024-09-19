/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:23:01 by ikondrat          #+#    #+#             */
/*   Updated: 2024/09/19 18:06:57 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*dup;

	i = 0;
	dup = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!dup)
		return (NULL);
	while (s[i] && i < n)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = s[i];
	return (dup);
}

static size_t	count_words(const char *s, char c)
{
	size_t	i;
	size_t	words;
	size_t	inside;

	i = 0;
	words = 0;
	inside = 0;
	while (s[i])
	{
		if (s[i] == c && inside == 0)
		{
			words++;
			inside = 1;
		}
		if (s[i] == c)
			inside = 0;
		i++;
	}
	return (words);
}

static void	split_process(char **out, const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	start = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (start < i)
			{
				out[j] = ft_strndup(s + start, i - start - 1);
				j++;
			}
			start = i + 1;
		}
		i++;
	}
	if (start < i)
		out[j] = ft_strndup(s + start, i - start);
	out[j] = NULL;
}

char	**ft_split(const char *s, char c)
{
	char	**out;

	out = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!out)
		return (NULL);
	split_process(out, s, c);
	return (out);
}
