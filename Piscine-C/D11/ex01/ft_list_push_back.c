/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 15:41:10 by mavagner          #+#    #+#             */
/*   Updated: 2016/07/20 22:09:15 by mavagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new;
	t_list	*tmp;

	if (begin_list == 0)
		return ;
	new = ft_create_elem(data);
	if (new == 0)
		return ;
	tmp = *begin_list;
	while (tmp->next != 0)
		tmp = tmp->next;
	tmp->next = new;
}
