/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 22:04:04 by mavagner          #+#    #+#             */
/*   Updated: 2016/07/19 22:23:09 by mavagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_add(int a, int b)
{
	return (ft_putnbr(a + b));
}

void	ft_sub(int a, int b)
{
	return (ft_putnbr(a - b));
}

void	ft_multi(int a, int b)
{
	return (ft_putnbr(a * b));
}

void	ft_div(int a, int b)
{
	if (b == 0)
		return (ft_putstr("Stop : division by zero"));
	return (ft_putnbr(a / b));
}

void	ft_mod(int a, int b)
{
	if (b == 0)
		return (ft_putstr("Stop : modulo by zero"));
	return (ft_putnbr(a % b));
}
