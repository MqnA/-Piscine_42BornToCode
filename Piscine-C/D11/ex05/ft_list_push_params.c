/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 21:55:38 by mavagner          #+#    #+#             */
/*   Updated: 2016/07/20 22:05:33 by mavagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	int			i;
	t_list		*tmp;
	t_list		*tmp2;

	i = 0;
	tmp = NULL;
	while (i < ac)
	{
		tmp2 = ft_create_elem(av[i]);
		tmp2->next = tmp;
		tmp = tmp2;
		i++;
	}
	return (tmp);
}
