/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:23:56 by ikondrat          #+#    #+#             */
/*   Updated: 2024/09/19 20:47:20 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	substr = (char *)malloc(len * sizeof(char));
	i = 0;
	if (!substr || !str)
		return (NULL);
	if (ft_strlen(str) < (size_t)start + len)
	{
		while (str[i])
		{
			substr[i] = str[start + i];
			i++;
		}
	}
	while (str[start + i] && i < len && start < ft_strlen(str))
	{
		substr[i] = str[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
