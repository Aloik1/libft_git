/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <ikondrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 13:35:48 by aloiki            #+#    #+#             */
/*   Updated: 2024/10/02 17:54:39 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_printf_lib_utils.h"
#include <stdio.h>

int	ft_many_ifs(const char *str, int i, va_list params)
{
	if (str[i] == 'c')
		return (ft_printf_c(va_arg(params, int)));
	if (str[i] == 'd' || str[i] == 'i')
		return (ft_printf_d_i(va_arg(params, int)));
	if (str[i] == 's')
		return (ft_printf_s(va_arg(params, char *)));
	if (str[i] == 'u')
		return (ft_printf_u(va_arg(params, unsigned int)));
	if (str[i] == 'x')
		return (ft_printf_x(va_arg(params, unsigned int)));
	if (str[i] == 'X')
		return (ft_printf_x_big(va_arg(params, unsigned int)));
	if (str[i] == 'p')
		return (ft_printf_p(va_arg(params, void *)));
	if (str[i] == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	params;
	int		len;
	int		i;

	va_start(params, str);
	len = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len = len + ft_many_ifs(str, i, params);
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			len++;
		}
		i++;
	}
	va_end(params);
	return (len);
}

// int	main()
// {
// 	printf("%d\n", ft_printf("%d", 10));
// 	printf("%d", printf("%d", 10));
// }