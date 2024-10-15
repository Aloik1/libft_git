/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:28:15 by ikondrat          #+#    #+#             */
/*   Updated: 2024/09/20 20:48:17 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*out;
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (j > i && ft_strchr(set, s1[j - 1]))
		j--;
	len = j - i;
	out = (char *)malloc(sizeof(char) * len + 1);
	if (!out)
		return (NULL);
	ft_strlcpy(out, s1 + i, len + 1);
	return (out);
}
