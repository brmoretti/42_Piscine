/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safe_borders.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <brmoretti@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:11:45 by bmoretti          #+#    #+#             */
/*   Updated: 2023/09/14 14:30:15 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_safe_up_down(int pos, int *board, int *upper_border, int size)
{
	int	col;
	int	i;
	int	tallest;
	int	n;

	col = pos % size;
	i = col;
	tallest = 0;
	n = 0;
	while (i <= pos)
	{
		if (board[i] > tallest)
		{
			n++;
			if (n > upper_border[col])
				return (0);
			tallest = board[i];
		}
		i += size;
	}
	if (n < upper_border[col] && pos / size == size - 1)
		return (0);
	return (1);
}

int	ft_safe_down_up(int pos, int *board, int *lower_border, int size)
{
	int	col;
	int	i;
	int	tallest;
	int	n;

	col = pos % size;
	i = pos;
	tallest = 0;
	n = 0;
	if (pos / size == size - 1)
	{
		while (i >= 0)
		{
			if (board[i] > tallest)
			{
				n++;
				if (n > lower_border[col])
					return (0);
				tallest = board[i];
			}
			i -= size;
		}
	}
	if (n < lower_border[col] && pos / size == size - 1)
		return (0);
	return (1);
}

int	ft_safe_left_right(int pos, int *board, int *left_border, int size)
{
	int	row;
	int	i;
	int	tallest;
	int	n;

	row = pos / size;
	i = row * size;
	tallest = 0;
	n = 0;
	while (i <= pos)
	{
		if (board[i] > tallest)
		{
			n++;
			if (n > left_border[row])
				return (0);
			tallest = board[i];
		}
		i++;
	}
	if (n < left_border[row] && (i - 1) % size == size - 1)
		return (0);
	return (1);
}

int	ft_safe_right_left(int pos, int *board, int *right_border, int size)
{
	int	row;
	int	i;
	int	tallest;
	int	n;

	row = pos / size;
	i = pos;
	tallest = 0;
	n = 0;
	if (pos % size == size - 1)
	{
		while (i / size == row && i >= 0)
		{
			if (board[i] > tallest)
			{
				n++;
				if (n > right_border[row])
					return (0);
				tallest = board[i];
			}
			i--;
		}
	}
	if (n < right_border[row] && pos % size == size - 1)
		return (0);
	return (1);
}
