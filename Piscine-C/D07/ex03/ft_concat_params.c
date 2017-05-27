/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 21:35:06 by mavagner          #+#    #+#             */
/*   Updated: 2016/07/14 21:04:18 by mavagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count(int argc, char **argv)
{
	int	i;
	int	j;
	int	count;

	j = 0;
	i = 1;
	count = 0;
	while (i < argc)
	{
		j++;
		if (argv[i][j] == '\0')
		{
			i++;
			j = 0;
		}
		count++;
	}
	return (count + argc - 1);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	j = 0;
	i = 1;
	k = 0;
	str = (char *)malloc(sizeof(char) * ft_count(argc, argv));
	while (i < argc)
	{
		str[k] = argv[i][j];
		j++;
		k++;
		if (argv[i][j] == '\0')
		{
			str[k] = '\n';
			k++;
			i++;
			j = 0;
		}
	}
	return (str);
}
