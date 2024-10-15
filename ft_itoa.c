/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <ikondrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:17:53 by ikondrat          #+#    #+#             */
/*   Updated: 2024/09/20 20:33:44 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(int c)
{
	int	i;

	i = 1;
	if (c < 0)
		i++;
	while (c / 10 != 0)
	{
		i++;
		c = c / 10;
	}
	return (i);
}

char	*ft_itoa(int c)
{
	char	*out;
	int		neg;
	int		len;

	neg = 0;
	len = ft_numlen(c);
	if (c == -2147483648)
		return (ft_strdup("-2147483648"));
	out = (char *)malloc(ft_numlen(c) * sizeof(char) + 1);
	if (!out)
		return (NULL);
	if (c < 0)
	{
		c = -c;
		neg = 1;
	}
	out[len] = '\0';
	while (len-- > 0)
	{
		out[len] = c % 10 + '0';
		c = c / 10;
	}
	if (neg == 1)
		out[0] = '-';
	return (out);
}
