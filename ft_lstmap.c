/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhawksmi <bhawksmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:20:48 by bhawksmi          #+#    #+#             */
/*   Updated: 2021/09/22 17:55:26 by bhawksmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;

	if (!lst)
		return (NULL);
	list = ft_lstnew(f(lst->content));
	if (!list)
	{
		ft_lstclear(&list, del);
		return (NULL);
	}
	list->next = ft_lstmap(lst->next, f, del);
	return (list);
}
