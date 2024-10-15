/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <ikondrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:19:26 by ikondrat          #+#    #+#             */
/*   Updated: 2024/09/19 13:17:36 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*s;

	s = (void *)malloc(n * size);
	if (!s)
		return (NULL);
	ft_bzero(s, n * size);
	return (s);
}
