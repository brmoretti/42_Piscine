/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:31:51 by bmoretti          #+#    #+#             */
/*   Updated: 2023/08/22 09:15:06 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_double_digits(int n)
{
	int		dozens;
	int		units;
	char	dozens_char;
	char	units_char;

	dozens = n / 10;
	units = n % 10;
	dozens_char = dozens + '0';
	units_char = units + '0';
	write(1, &dozens_char, 1);
	write(1, &units_char, 1);
}

void	ft_print_double_digits_pair(int first, int second)
{
	ft_print_double_digits(first);
	ft_putchar(' ');
	ft_print_double_digits(second);
	if (!(first == 98 && second == 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			ft_print_double_digits_pair(first, second);
			second++;
		}
		first++;
	}
}
