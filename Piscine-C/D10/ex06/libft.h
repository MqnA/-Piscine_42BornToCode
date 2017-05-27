/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 22:20:03 by mavagner          #+#    #+#             */
/*   Updated: 2016/07/19 22:46:21 by mavagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>

void	do_op(int a, char c, int b);
void	ft_putstr(char *str);
void	ft_add(int a, int b);
int		ft_atoi(char *str);
void	ft_div(int a, int b);
void	ft_mod(int a, int b);
void	ft_multi(int a, int b);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_sub(int a, int b);
int		ft_strlen(char *str);

#endif
