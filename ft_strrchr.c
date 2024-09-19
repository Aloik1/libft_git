/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:20:46 by ikondrat          #+#    #+#             */
/*   Updated: 2024/09/19 19:53:40 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*out;

	i = ft_strlen(s) + 1;
	out = (char *)s;
	while (i > 0)
	{
		if (s[i] == c)
			return (&out[i]);
		i--;
	}
	if (i == 0 && s[i] == c)
		return (&out[i]);
	return (NULL);
}
