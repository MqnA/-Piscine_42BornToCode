/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 18:57:36 by mavagner          #+#    #+#             */
/*   Updated: 2016/07/20 21:38:15 by mavagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *tmp;
	t_list *new;

	if (begin_list == 0)
		return ;
	new = ft_create_elem(data);
	if (new == 0)
		return ;
	tmp = *begin_list;
	if (*begin_list)
	{
		tmp = new;
		tmp->next = *begin_list;
		*begin_list = tmp;
	}
	else
		*begin_list = ft_create_elem(data);
}
