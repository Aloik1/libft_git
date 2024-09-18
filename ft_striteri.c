/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:34:31 by ikondrat          #+#    #+#             */
/*   Updated: 2024/09/18 18:29:16 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *str, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	if (!(str == NULL || f == NULL))
	{
		while (str[i])
		{
			f(i, &str[i]);
			i++;
		}
	}
}
