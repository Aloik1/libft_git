/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_d_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <ikondrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 18:06:16 by aloiki            #+#    #+#             */
/*   Updated: 2024/10/03 16:14:14 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_printf_lib_utils.h"

static int	ft_number_len(int num)
{
	int	i;

	i = 0;
	if (num == -2147483648)
		return (11);
	if (num < 0)
	{
		i++;
		num = -num;
	}
	while (num / 10 != 0)
	{
		i++;
		num = num / 10;
	}
	i++;
	return (i);
}

int	ft_printf_d_i(int c)
{
	ft_putnbr_fd(c, 1);
	return (ft_number_len(c));
}
