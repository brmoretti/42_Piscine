/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safe_rowcol.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <brmoretti@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:34:02 by bmoretti          #+#    #+#             */
/*   Updated: 2023/09/14 13:57:43 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_safe_row(int pos, int *board, int size)
{
	int	row;
	int	i;

	row = pos / size;
	i = row * size;
	while (i < pos)
	{
		if (board[pos] == board[i])
			return (0);
		i++;
	}
	return (1);
}

int	ft_safe_col(int pos, int *board, int size)
{
	int	col;
	int	i;

	col = pos % size;
	i = col;
	while (i < pos)
	{
		if (board[pos] == board[i])
			return (0);
		i += size;
	}
	return (1);
}