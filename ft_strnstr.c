/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <ikondrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:17:47 by ikondrat          #+#    #+#             */
/*   Updated: 2024/09/19 20:32:47 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to_find[i] == '\0')
		return ((char *)src);
	while (src[i] && i < len)
	{
		j = 0;
		while (src[i + j] == to_find[j] && to_find[j] && i + j < len)
		{
			j++;
		}
		if (to_find[j] == '\0')
			return ((char *)(src + i));
		i++;
	}
	return (NULL);
}
