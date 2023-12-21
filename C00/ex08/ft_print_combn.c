/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 07:03:57 by bmoretti          #+#    #+#             */
/*   Updated: 2023/08/30 12:31:47 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse(char *str, int n_digits, int first)
{
	if (!first)
		write(1, ", ", 2);
	while (n_digits > 0)
	{
		write(1, &str[n_digits - 1], 1);
		n_digits--;
	}
}

void	ft_create_stair(char *str, int start_pos)
{
	while (start_pos > 0)
	{
		str[start_pos - 1] = str[start_pos] + 1;
		start_pos--;
	}
}

void	ft_increment(char *nb, int n_digits)
{
	int	i;

	while (nb[0] <= '9')
	{
		ft_print_reverse(nb, n_digits, 0);
		nb[0]++;
	}
	i = 1;
	while (i < n_digits - 1)
	{
		if ((nb[i] + 1) <= '9' - i)
		{
			nb[i]++;
			ft_create_stair(nb, i);
			ft_increment(nb, n_digits);
		}
		i++;
	}
	if (nb[n_digits - 1] <= '9' - n_digits + 1)
	{
		nb[n_digits - 1]++;
		ft_create_stair(nb, n_digits - 1);
		ft_increment(nb, n_digits);
	}
}

void	ft_print_combn(int n)
{
	char	nb[10];
	int		i;

	i = 0;
	while (i < n)
	{
		nb[i] = '0';
		i++;
	}
	ft_create_stair(nb, n - 1);
	ft_print_reverse(nb, n, 1);
	nb[0]++;
	ft_increment(nb, n);
}
