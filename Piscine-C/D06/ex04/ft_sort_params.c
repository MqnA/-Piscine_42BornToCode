/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 22:07:46 by mavagner          #+#    #+#             */
/*   Updated: 2016/07/13 21:27:29 by mavagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i += 1;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

char	**sort_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	j = 2;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[j]) > 0)
		{
			tmp = argv[i];
			argv[i] = argv[j];
			argv[j] = tmp;
		}
		j++;
		if (j >= argc)
		{
			i++;
			j = i + 1;
		}
	}
	return (argv);
}

int		main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		return (0);
	else if (argc == 2)
	{
		ft_putstr(argv[1]);
		return (0);
	}
	i = 1;
	argv = sort_params(argc, argv);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		if (i < argc - 1)
			ft_putchar('\n');
		i++;
	}
	return (0);
}
