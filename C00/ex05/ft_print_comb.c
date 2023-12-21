/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 07:50:02 by bmoretti          #+#    #+#             */
/*   Updated: 2023/08/30 12:32:17 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_digits(char first, char middle, char last)
{
	ft_putchar(first);
	ft_putchar(middle);
	ft_putchar(last);
	if (!(first == '7' && middle == '8' && last == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	first;
	char	middle;
	char	last;

	first = '0';
	while (first <= '7')
	{
		middle = first + 1;
		while (middle <= '8')
		{
			last = middle + 1;
			while (last <= '9')
			{
				ft_print_digits(first, middle, last);
				last++;
			}
			middle++;
		}
		first++;
	}
}
