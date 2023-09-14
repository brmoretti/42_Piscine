/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <brmoretti@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:07:18 by bmoretti          #+#    #+#             */
/*   Updated: 2023/09/14 16:59:13 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_error(void);//err.c
int		ft_ult_safe(int pos, int *board, int **sides, int size);//safe.c
void	ft_print_board(int *board, int size);//strings.c

int	*ft_board(int size)
{
	int	*board;
	int	i;

	board = malloc(size * size * sizeof(int));
	i = 0;
	while (i < size * 4)
	{
		board[i] = 0;
		i++;
	}
	return (board);
}

void	ft_backtracking(int *board, int **sides, int size)
{
	int	i;

	i = 0;
	while (i < size * size)
	{
		if (i == -1)
		{
			ft_error();
			return ;
		}
		board[i]++;
		if (board[i] == size + 1)
		{
			board[i] = 0;
			i--;
		}
		else if (ft_ult_safe(i, board, sides, size))
			i++;
	}
	ft_print_board(board, size);
}

void	ft_solver(int **sides, int size)
{
	int	*board;

	board = ft_board(size);
	ft_backtracking(board, sides, size);
	free (board);
}
