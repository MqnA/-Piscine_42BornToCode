/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 05:08:06 by mavagner          #+#    #+#             */
/*   Updated: 2016/07/17 08:51:44 by mavagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			resolve_sudoku(char sudoku[9][9], int pos);
int			init_sudoku(char **lines, char sudoku[9][9]);

void		print_sudoku(char sudoku[9][9])
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		write(1, &sudoku[i][j], 1);
		if (j != 8)
			write(1, " ", 1);
		j++;
		if (j >= 9)
		{
			write(1, "\n", 1);
			i++;
			j = 0;
		}
	}
	j = 0;
	i++;
}

int			main(int argc, char **argv)
{
	char	sudoku[9][9];

	if (argc != 10)
	{
		write(1, "Erreur\n", 7);
		return (0);
	}
	if (0 == init_sudoku(argv, sudoku))
	{
		write(1, "Erreur\n", 7);
		return (0);
	}
	if (0 == resolve_sudoku(sudoku, 0))
	{
		write(1, "Erreur\n", 7);
		return (0);
	}
	print_sudoku(sudoku);
	return (0);
}
