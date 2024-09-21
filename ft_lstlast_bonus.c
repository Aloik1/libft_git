/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:08:15 by ikondrat          #+#    #+#             */
/*   Updated: 2024/09/21 19:12:16 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	i;

	i = 0;
	while (i < ft_lstsize(lst) && lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}
