/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:16:44 by ikondrat          #+#    #+#             */
/*   Updated: 2024/09/24 12:31:19 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	if (!lst || !del)
		return ;
	aux = NULL;
	while ((*lst))
	{
		aux = *lst;
		*lst = aux->next;
		ft_lstdelone(aux, del);
	}
}
