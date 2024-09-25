/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <ikondrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:23:01 by ikondrat          #+#    #+#             */
/*   Updated: 2024/09/24 18:08:10 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*dup;

	i = 0;
	dup = (char *)malloc(n * sizeof(char) + 1);
	if (!dup)
		return (NULL);
	while (s[i] && i < n)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
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
		if (s[i] != c && inside == 0)
		{
			words++;
			inside = 1;
		}
		else if (s[i] == c)
			inside = 0;
		i++;
	}
	return (words);
}

static char	**ft_free(char **matrix, size_t j)
{
	while (j > 0)
	{
		free(matrix[j - 1]);
		j--;
	}
	free(matrix);
	return (NULL);
}

static char	**split_process(char **out, const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (j < count_words(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			out[j] = ft_strndup(s + start, i - start);
			if (!out[j])
				return (ft_free(out, j));
			j++;
		}
	}
	out[j] = NULL;
	return (out);
}

char	**ft_split(const char *s, char c)
{
	char	**out;

	if (!s)
		return (NULL);
	out = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!out)
		return (NULL);
	return (split_process(out, s, c));
}
