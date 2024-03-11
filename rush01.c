/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: alazunin < alazunin@student.42london.co    +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/03/10 16:55:38 by alazunin          #+#    #+#             */
/*   Updated: 2024/03/10 16:55:38 by alazunin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

char	g_slash = '/';
char	g_star = '*';
char	g_backslash = '\\';
char	g_space = ' ';
char	g_new_line = '\n';

void	print_line(int x, char first_char, char mid_char, char end_char)
{
	int		a;

	a = 0;
	while (a < x)
	{
		if (a == 0)
			ft_putchar(first_char);
		else
		{
			if (a == x - 1)
				ft_putchar(end_char);
			else
				ft_putchar(mid_char);
		}
		a++;
	}
	ft_putchar('\n');
}

void	y_condition(int y)
{
	int		i;

	i = 0;
	ft_putchar(g_slash);
	ft_putchar(g_new_line);
	while (i < (y - 2))
	{
		ft_putchar(g_star);
		ft_putchar(g_new_line);
		i++;
	}
	ft_putchar(g_backslash);
	ft_putchar(g_new_line);
}

void	full_condition(int x, int y)
{
	int		i;

	i = 0;
	print_line(x, g_slash, g_star, g_backslash);
	while (i < (y - 2))
	{
		print_line(x, g_star, g_space, g_star);
		i++;
	}
	print_line(x, g_backslash, g_star, g_slash);
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		ft_putchar(g_new_line);
		return ;
	}
	else if (x == 1 && y > 1)
	{
		y_condition(y);
	}
	else if (x > 1 && y == 1)
	{
		print_line(x, g_slash, g_star, g_backslash);
	}
	else if (x == 1 && y == 1)
	{
		ft_putchar(g_slash);
		ft_putchar(g_new_line);
	}
	else
	{
		full_condition(x, y);
	}
}
