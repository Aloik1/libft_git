/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <ikondrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 18:07:31 by aloiki            #+#    #+#             */
/*   Updated: 2024/10/03 12:47:32 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_printf_lib_utils.h"

int	ft_printf_u(unsigned int c)
{
	int	i;

	i = 0;
	if (c >= 10)
		i = i + ft_printf_u(c / 10);
	i = i + ft_putchar_fd((c % 10) + '0', 1);
	return (i);
}
