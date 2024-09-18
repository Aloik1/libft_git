/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:23:01 by ikondrat          #+#    #+#             */
/*   Updated: 2024/09/18 16:20:29 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
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

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;
	size_t	count;
	char	**out;

	i = 0;
	j = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	out = (char **)malloc((count + 1) * sizeof(char *));
	if (!out)
		return (NULL);
	i = 0;
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
	{
		out[j] = ft_strndup(s + start, i - start);
		j++;
	}
	out[j] = NULL;
	return (out);
}
