/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 13:39:44 by rasingh           #+#    #+#             */
/*   Updated: 2018/06/11 10:12:53 by rasingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;
	t_list	*node;
	t_list	*next;

	if (!lst || !f)
		return (NULL);
	node = f(lst);
	ret = node;
	lst = lst->next;
	while (lst)
	{
		next = f(lst);
		node->next = next;
		node = next;
		lst = lst->next;
	}
	node->next = NULL;
	return (ret);
}
