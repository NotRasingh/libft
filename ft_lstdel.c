/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 13:19:38 by rasingh           #+#    #+#             */
/*   Updated: 2018/06/08 13:28:40 by rasingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));
{
	t_list	tmp;
	if(!*alst || !alst || !del)
		return ;
	while (*alst)
	{
		tmp = *alst->next;
		ft_lstdelone(alst, del);
		*alst = tmp;
	}
}
