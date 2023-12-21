/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <brmoretti@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:54:10 by bmoretti          #+#    #+#             */
/*   Updated: 2023/09/14 13:54:17 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_print_board(int *board, int size)
{
	char	d;
	int		i;

	i = 0;
	while (i < size * size)
	{
		d = board[i] + '0';
		write(1, &d, 1);
		if (i % size == size - 1)
			write(1, "\n", 1);
		else
			write(1, " ", 1);
		i++;
	}
}
