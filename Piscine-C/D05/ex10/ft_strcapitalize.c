/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 14:54:36 by mavagner          #+#    #+#             */
/*   Updated: 2016/07/12 18:40:19 by mavagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int		ft_isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int		ft_isnum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int a;

	a = 1;
	if (ft_islower(str[0]) == 1)
		str[0] = 'A' + (str[0] - 'a');
	while (str[a])
	{
		if (ft_islower(str[a]) == 1 && ft_isnum(str[a - 1]) == 0 &&
			ft_islower(str[a - 1]) == 0 && ft_isupper(str[a - 1]) == 0)
			str[a] = 'A' + str[a] - 'a';
		if (ft_isupper(str[a]) == 1 && (ft_islower(str[a - 1]) == 1 ||
			ft_isupper(str[a - 1]) == 1 || ft_isnum(str[a - 1]) == 1))
			str[a] = 'a' + str[a] - 'A';
		a++;
	}
	return (str);
}
