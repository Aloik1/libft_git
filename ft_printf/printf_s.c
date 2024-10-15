/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <ikondrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 18:07:09 by aloiki            #+#    #+#             */
/*   Updated: 2024/10/01 17:04:44 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_printf_lib_utils.h"

int	ft_printf_s(char *str)
{
	int		i;

	i = 0;
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	while (str[i])
	{
		ft_putchar_fd(str[i], 1);
		i++;
	}
	return (i);
}
