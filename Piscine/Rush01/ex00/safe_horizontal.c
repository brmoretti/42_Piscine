/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safe_horizontal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <brmoretti@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:57:57 by bmoretti          #+#    #+#             */
/*   Updated: 2023/09/14 16:02:05 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_safe_left_right2(int pos, int *board, int *left_border, int size)
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

int	ft_safe_right_left2(int pos, int *board, int *right_border, int size)
{
	int	row;
	int	i;
	int	tallest;
	int	n_hidden;

	row = pos / size;
	i = pos;
	tallest = 0;
	n_hidden = 0;
	while (i / size == row && i >= 0)
	{
		if (board[i] > tallest)
			tallest = board[i];
		else
			n_hidden++;
		if (size - n_hidden < right_border[row])
			return (0);
		i--;
	}
	return (1);
}
