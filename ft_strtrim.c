/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:28:15 by ikondrat          #+#    #+#             */
/*   Updated: 2024/09/19 17:20:49 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*out;
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (j > 0 && ft_strchr(set, s1[j]))
		j--;
	out = (char *)malloc((j - i + 1) * sizeof(char) + 1);
	if (!out)
		return (NULL);
	ft_strlcpy(out, s1 + i, j - i + 2);
	return (out);
}
