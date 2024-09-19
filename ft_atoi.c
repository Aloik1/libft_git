/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:39:47 by ikondrat          #+#    #+#             */
/*   Updated: 2024/09/19 17:47:40 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	int				num;
	unsigned char	*s;

	i = 0;
	sign = 1;
	num = 0;
	s = (unsigned char *)str;
	while ((s[i] == 32) || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		num = (num * 10) + s[i] - '0';
		i++;
	}
	return (num * sign);
}
