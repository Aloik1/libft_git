/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_x_big.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <ikondrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 18:04:26 by aloiki            #+#    #+#             */
/*   Updated: 2024/10/02 13:38:22 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_printf_lib_utils.h"

static int	ft_hex_num_len(unsigned int num)
{
	int	i;

	i = 0;
	while (num >= 16)
	{
		i++;
		num = num / 16;
	}
	i++;
	return (i);
}

static void	ft_put_nbr_hex_upper(unsigned int num)
{
	char	*hex;

	hex = "0123456789ABCDEF";
	if (num >= 16)
	{
		ft_put_nbr_hex_upper(num / 16);
		ft_put_nbr_hex_upper(num % 16);
	}
	else if (num < 16)
		ft_putchar_fd(hex[num], 1);
	return ;
}

int	ft_printf_x_big(unsigned int c)
{
	ft_put_nbr_hex_upper(c);
	return (ft_hex_num_len(c));
}
