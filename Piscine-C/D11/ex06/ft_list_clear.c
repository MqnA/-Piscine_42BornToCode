/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 22:35:01 by mavagner          #+#    #+#             */
/*   Updated: 2016/07/20 22:45:40 by mavagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void		ft_list_clear(t_list **begin_list)
{
	t_list	*tmp;
	t_list	*tmp1;

	if (*begin_list)
	{
		tmp = *begin_list;
		while (tmp)
		{
			tmp1 = tmp->next;
			free(tmp);
			tmp = NULL;
			tmp = tmp1;
		}
		*begin_list = NULL;
	}
}
