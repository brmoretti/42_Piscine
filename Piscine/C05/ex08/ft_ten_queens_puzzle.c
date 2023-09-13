/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <brmoretti@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 09:41:10 by bmoretti          #+#    #+#             */
/*   Updated: 2023/09/13 12:28:16 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_digits_array(int *int_array, int size)
{
	char	d;
	int		i;

	i = 0;
	while (i < size)
	{
		d = int_array[i] + '0';
		write(1, &d, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_safe_place(int *queens, int row, int col)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (row == queens[i]
			|| row == queens[i] + (col - i)
			|| row == queens[i] - (col - i)
		)
			return (0);
		i++;
	}
	return (1);
}

void	ft_solving(int *queens, int row, int col, int *n)
{
	if (col == -1)
		return ;
	else if (col == 10)
	{
		ft_print_digits_array(queens, 10);
		*n += 1;
		ft_solving(queens, queens[col - 1] + 1, col - 1, n);
	}
	while (row < 10)
	{
		if (ft_safe_place(queens, row, col))
		{
			queens[col] = row;
			return (ft_solving(queens, 0, col + 1, n));
		}
		row++;
	}
	return (ft_solving(queens, queens[col - 1] + 1, col - 1, n));
}

int	ft_ten_queens_puzzle(void)
{
	int	queens[10];
	int	n;

	queens[0] = 0;
	n = 0;
	ft_solving(queens, 2, 1, &n);
	return (n);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_ten_queens_puzzle());
	return (0);
}
*/