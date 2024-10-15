/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <ikondrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:12:37 by ikondrat          #+#    #+#             */
/*   Updated: 2024/09/19 14:55:07 by ikondrat         ###   ########.fr       */
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
	if (d > s)
	{
		i = n - 1;
		while (i > 0)
		{
			d[i] = s[i];
			i--;
		}
		d[i] = s[i];
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
