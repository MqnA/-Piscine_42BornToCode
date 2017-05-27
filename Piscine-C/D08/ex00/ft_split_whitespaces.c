/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 16:38:26 by mavagner          #+#    #+#             */
/*   Updated: 2016/07/16 16:41:02 by mavagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		flag_separator(char c)
{
	if (c == '\n' || c == ' ' || c == '\t' || c == '\0')
		return (1);
	else
		return (0);
}

int		count_word(char *str)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (str[i] != '\0')
	{
		if (flag_separator(str[i] == 0 && flag_separator(str[i + 1]) == 1))
			nb++;
		i++;
	}
	return (nb);
}

void	add_word(char *word, char *str)
{
	int i;

	i = 0;
	while (flag_separator(str[i] == 0))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
}

void	tab_creator(char **tab, char *str)
{
	int i;
	int j;
	int word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (flag_separator(str[i]) == 0)
		{
			j = 0;
			while (flag_separator(str[i]) == 0)
				j++;
			tab[word] = (char*)malloc(sizeof(char) * (j + 1));
			add_word((tab[word]), (str + i));
			word++;
			i = i + j;
		}
		else
			i++;
	}
	tab[word] = NULL;
}

char	**ft_split_whitespaces(char *str)
{
	int		nbr;
	char	**tab;

	nbr = count_word(str);
	tab = (char **)malloc(sizeof(char *) * (nbr + 1));
	tab_creator(tab, str);
	return (tab);
}
