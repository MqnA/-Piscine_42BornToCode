/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 08:52:21 by mavagner          #+#    #+#             */
/*   Updated: 2016/07/17 15:14:12 by mavagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		check_sudoku(char sudoku[9][9])
{
	int	i;
	int	j;
	int	nbr;

	i = 0;
	j = 0;
	nbr = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			if ('0' < sudoku[i][j] && '9' >= sudoku[i][j])
				nbr++;
			else if (sudoku[i][j] != '.')
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	if (nbr < 17)
		return (0);
	return (1);
}

int		init_sudoku(char **lines, char sudoku[9][9])
{
	int	i;
	int	j;
	int	nb;

	i = 0;
	j = 0;
	nb = 0;
	while (i < 9)
	{
		if (ft_strlen(lines[i + 1]) != 9)
			return (0);
		while (j < 9)
		{
			sudoku[i][j] = lines[i + 1][j];
			j++;
		}
		j = 0;
		i++;
	}
	if (0 == check_sudoku(sudoku))
		return (0);
	return (1);
}
