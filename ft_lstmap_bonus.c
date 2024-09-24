/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikondrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:47:44 by ikondrat          #+#    #+#             */
/*   Updated: 2024/09/22 19:58:09 by ikondrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*out;
	t_list	*aux;

	if (!lst || !f || !del)
		return (NULL);
	out = NULL;
	while (lst)
	{
		aux = ft_lstnew(lst->content);
		if (!aux)
		{
			ft_lstclear(&out, del);
			return (NULL);
		}
		aux->content = f(aux->content);
		ft_lstadd_back(&out, aux);
		lst = lst->next;
	}
	return (out);
}
