/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <brmoretti@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:45:58 by bmoretti          #+#    #+#             */
/*   Updated: 2023/09/14 10:34:27 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_error(void); //err.c
int		ft_check_digits(char *input); //err.c
int		ft_side_size(char *input); //sides.c
int		**ft_sides(int **sides, char *input, int size); //sides.c
void	ft_free_sides(int **sides);//mem_free.c
void	ft_solver(int **sides, int size);//solver.c

int	main(int argc, char *argv[])
{
	int	**sides;
	int	size;

	if (argc != 2 || !ft_check_digits(argv[1]))
		return (ft_error());
	size = ft_side_size(argv[1]);
	sides = malloc(4 * sizeof(int *));
	if (sides == NULL)
		return (ft_error());
	sides = ft_sides(sides, argv[1], size);
	ft_solver(sides, size);
	ft_free_sides(sides);
	return (0);
}