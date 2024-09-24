/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:49:17 by ikondrat          #+#    #+#             */
/*   Updated: 2024/09/24 12:32:40 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	int		i;

	if (!lst || !f)
		return ;
	i = ft_lstsize(lst) - 1;
	while (i >= 0)
	{
		f(lst->content);
		lst = lst->next;
		i--;
	}
}
