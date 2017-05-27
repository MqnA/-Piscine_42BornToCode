/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 13:10:50 by mavagner          #+#    #+#             */
/*   Updated: 2016/07/12 18:41:51 by mavagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int a;

	a = 0;
	if (!n)
		return (0);
	while ((s1[a] == s2[a] && s1[a]) && a < (n - 1) && (s1[a] || s2[a]))
		a++;
	return (s1[a] - s2[a]);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	if (*to_find == '\0')
		return (str);
	i = ft_strlen(to_find);
	while (*str)
	{
		if (ft_strncmp(str, to_find, i) == 0)
			return (str);
		str++;
	}
	return (0);
}
