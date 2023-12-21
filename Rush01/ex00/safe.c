/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safe.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <brmoretti@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:12:31 by bmoretti          #+#    #+#             */
/*   Updated: 2023/09/14 16:03:49 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_safe_row(int pos, int *board, int size);//safe_rowcol.c
int	ft_safe_col(int pos, int *board, int size);//safe_rowcol.c
int	ft_safe_up_down(int pos, int *board, int *upper_border, int size);//safe_borders.c
int	ft_safe_down_up(int pos, int *board, int *lower_border, int size);//safe_borders.c
int	ft_safe_left_right(int pos, int *board, int *left_border, int size);//safe_borders.c
int	ft_safe_right_left(int pos, int *board, int *right_border, int size);//safe_borders.c
int	ft_safe_up_down2(int pos, int *board, int *upper_border, int size);//safe_vertical.c
int	ft_safe_down_up2(int pos, int *board, int *lower_border, int size);//safe_vertical.c
int	ft_safe_left_right2(int pos, int *board, int *left_border, int size);//safe_horizontal.c
int	ft_safe_right_left2(int pos, int *board, int *right_border, int size);//safe_horizontal.c

int	ft_ult_safe(int pos, int *board, int **sides, int size)
{
	if (ft_safe_row(pos, board, size)
		&& ft_safe_col(pos, board, size)
		&& ft_safe_up_down(pos, board, sides[0], size)
		&& ft_safe_down_up(pos, board, sides[1], size)
		&& ft_safe_left_right(pos, board, sides[2], size)
		&& ft_safe_right_left(pos, board, sides[3], size)
	)
		return (1);
	return (0);
}

int	ft_ult_safe2(int pos, int *board, int **sides, int size)
{
	if (ft_safe_row(pos, board, size)
		&& ft_safe_col(pos, board, size)
		&& ft_safe_up_down2(pos, board, sides[0], size)
		&& ft_safe_down_up2(pos, board, sides[1], size)
		&& ft_safe_left_right2(pos, board, sides[2], size)
		&& ft_safe_right_left2(pos, board, sides[3], size)
	)
		return (1);
	return (0);
}