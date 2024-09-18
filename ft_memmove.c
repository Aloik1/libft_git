/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:12:37 by ikondrat          #+#    #+#             */
/*   Updated: 2024/09/17 19:13:16 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (n == 0)
		return (dest);
	if (s < d)
	{
		i = n - 1;
		while (i > 0)
		{
			d[i] = s[i];
			i--;
		}
		d[i] = '\0';
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
