/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 10:00:23 by rasingh           #+#    #+#             */
/*   Updated: 2018/06/11 11:23:34 by rasingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *tmp;

	tmp = (t_list*)malloc(sizeof(t_list));
	if (!tmp)
		return (NULL);
	if (!content)
	{
		content = NULL;
		content_size = 0;
	}
	else
	{
		tmp->content = (void*)content;
		tmp->content_size = content_size;
	}
	tmp->next = NULL;
	return (tmp);
}
