/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:11:42 by ikondrat          #+#    #+#             */
/*   Updated: 2024/09/20 12:57:48 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*out;

	i = 0;
	out = (char *)s;
	while (out[i])
	{
		if (out[i] == (char)c)
			return (out + i);
		i++;
	}
	if (out[i] == (char)c && out[i] == '\0')
		return (out + i);
	return (NULL);
}
