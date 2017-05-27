/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 21:34:19 by mavagner          #+#    #+#             */
/*   Updated: 2016/07/14 20:08:35 by mavagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *ret;

	i = 0;
	ret = (int*)malloc(sizeof(int) * (max - min));
	if (min >= max)
		return (0);
	while (min < max)
	{
		ret[i] = min;
		min++;
		i++;
	}
	return (ret);
}
