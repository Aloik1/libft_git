/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:20:46 by ikondrat          #+#    #+#             */
/*   Updated: 2024/09/17 14:44:08 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*out;

	i = ft_strlen(s) + 1;
	i = (int)i;
	out = (char *)s;
	while (i != 0)
	{
		if (out[i] == c)
			return (&out[i]);
		i--;
	}
	return (NULL);
}
