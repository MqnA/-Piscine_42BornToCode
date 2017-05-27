/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 03:45:06 by mavagner          #+#    #+#             */
/*   Updated: 2016/07/19 06:33:07 by mavagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int	j;
	int	sort;

	i = 0;
	j = 1;
	sort = 0;
	while (i < length - 1)
	{
		while (j < length)
		{
			if (f(tab[i], tab[j]) == 0)
				sort = 0;
			else if (f(tab[i], tab[j]) <= 0 && sort > -1)
				sort = 1;
			else if (f(tab[i], tab[j]) >= 0 && sort < 1)
				sort = -1;
			else
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}
