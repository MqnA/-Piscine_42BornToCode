/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 21:47:53 by mavagner          #+#    #+#             */
/*   Updated: 2016/07/19 22:31:56 by mavagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	do_op(int a, char c, int b)
{
	if (c == '+')
		ft_add(a, b);
	else if (c == '-')
		ft_sub(a, b);
	else if (c == '*')
		ft_multi(a, b);
	else if (c == '/')
		ft_div(a, b);
	else if (c == '%')
		ft_mod(a, b);
	else
		return (ft_putstr("0\n"));
	ft_putchar('\n');
}
