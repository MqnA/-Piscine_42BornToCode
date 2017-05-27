/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 04:56:39 by mavagner          #+#    #+#             */
/*   Updated: 2016/07/17 15:13:22 by mavagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_row(char sudoku[9][9], int nb, int i, int j)
{
	int	k;

	k = 0;
	while (k < 9)
	{
		if ((sudoku[i][k] == nb + '0' || sudoku[k][j] == nb + '0'))
			return (0);
		k++;
	}
	return (1);
}

int		check_square(char sudoku[9][9], int nb, int i, int j)
{
	int	x;
	int	y;

	y = 3 * (j / 3);
	x = 3 * (i / 3);
	j = y;
	i = x;
	while (i < x + 3)
	{
		while (j < y + 3)
		{
			if ('0' + nb == sudoku[i][j])
				return (0);
			j++;
		}
		j = y;
		i++;
	}
	return (1);
}

int		resolve_sudoku(char sudoku[9][9], int pos)
{
	int	i;
	int	j;
	int	nb;

	nb = 1;
	i = pos / 9;
	j = pos % 9;
	if (pos == 9 * 9)
		return (1);
	if (sudoku[i][j] != '.')
		return (resolve_sudoku(sudoku, pos + 1));
	while (nb <= 9)
	{
		if (1 == check_row(sudoku, nb, i, j) &&
				1 == check_square(sudoku, nb, i, j))
		{
			sudoku[i][j] = '0' + nb;
			if (1 == resolve_sudoku(sudoku, pos + 1))
				return (1);
		}
		nb++;
	}
	sudoku[i][j] = '.';
	return (0);
}
