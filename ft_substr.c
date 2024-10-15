/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:23:56 by ikondrat          #+#    #+#             */
/*   Updated: 2024/09/20 20:56:10 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (!str)
		return (NULL);
	if (start >= ft_strlen(str))
		return (ft_strdup(""));
	if (len > ft_strlen(str) - start)
		len = ft_strlen(str) - start;
	substr = (char *)malloc(len * sizeof(char) + 1);
	if (!substr)
		return (NULL);
	while (i < len)
	{
		substr[i] = str[start + i];
		i++;
	}
	while (str[start + i] && i < len && start < ft_strlen(str))
	{
		substr[i] = str[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
