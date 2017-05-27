/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 21:49:30 by mavagner          #+#    #+#             */
/*   Updated: 2016/07/20 21:54:07 by mavagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_last(t_list *begin_list)
{
	t_list *tmp;

	if (begin_list == 0)
		return ;
	tmp = begin_list;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}
