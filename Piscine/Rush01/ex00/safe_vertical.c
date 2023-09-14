/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safe_vertical.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <brmoretti@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:31:37 by bmoretti          #+#    #+#             */
/*   Updated: 2023/09/14 16:02:29 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_safe_up_down2(int pos, int *board, int *upper_border, int size)
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

int	ft_safe_down_up2(int pos, int *board, int *lower_border, int size)
{
	int	col;
	int	i;
	int	tallest;
	int	n_hidden;

	col = pos % size;
	i = pos;
	tallest = 0;
	n_hidden = 0;
	while (i >= 0)
	{
		if (board[i] > tallest)
			tallest = board[i];
		else
			n_hidden++;
		if (size - n_hidden < lower_border[col])
			return (0);
		i -= size;
	}
	return (1);
}