/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:19:26 by ikondrat          #+#    #+#             */
/*   Updated: 2024/09/17 16:15:59 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t	i;
	void	*s;

	i = 0;
	s = (void *)malloc(n * size);
	if (!s || n == 0 || size == 0)
		return (NULL);
	ft_bzero(s, n * size);
	return (s);
}
