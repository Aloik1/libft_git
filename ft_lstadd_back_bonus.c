/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 14:11:02 by ikondrat          #+#    #+#             */
/*   Updated: 2024/09/22 16:00:17 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if ((*lst) == NULL)
	{
		ft_lstadd_front(lst, new);
		return ;
	}
	else
	{
		aux = ft_lstlast((*lst));
		aux->next = new;
	}
}
