/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 21:36:05 by mavagner          #+#    #+#             */
/*   Updated: 2016/07/17 01:37:57 by mavagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}


int		ft_other(char c)
{
	if (c == '\n' || c == '\t' || c == '\0' || c == ' ')
		return (1);
	else
		return (0);
}

int		count_space(char *str)
{
	int	i;
	int	nb;

	i = 1;
	nb = 0;
	if (ft_other(str[0]) == 0)
		nb++;
	while (str[i] != '\0')
	{
		if (ft_other(str[i - 1]) == 1 && ft_other(str[i]) == 0)
			nb++;
		i++;
	}
	return (nb);
}

void	up_word(char *word, char *str)
{
	int	i;

	i = 0;
	while (ft_other(str[i]) == 0)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
}

void	mem_tab(char **tab, char *str)
{
	int	i;
	int	j;
	int	word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (ft_other(str[i]) == 0)
		{
			j = 0;
			while (ft_other(str[i + j]) == 0)
				j++;
			tab[word] = (char *)malloc(sizeof(char) * (j + 1));
			up_word((tab[word]), (&str[i]));
			word++;
			i = i + j;
		}
		i++;
	}
	tab[word] = NULL;
}

char	**ft_split_whitespaces(char *str)
{
	int		nb;
	char	**tab;

	nb = count_space(str);
	tab = (char **)malloc(sizeof(char *) * (nb + 1));
	mem_tab(tab, str);
	return (tab);
}

int		main()
{
	char **str;
	char *ptr;

	ptr = "Salut	ca\nva ou quoi";
	str = ft_split_whitespaces(ptr);

	printf("%s",(*str));
	return (0);
}
