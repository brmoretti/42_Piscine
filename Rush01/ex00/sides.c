/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sides.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <brmoretti@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:32:50 by bmoretti          #+#    #+#             */
/*   Updated: 2023/09/13 15:29:08 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_side_size(char *input)
{
	int	n;

	n = 0;
	while (*input)
	{
		if ('0' <= *input && *input <= '9')
			n++;
		input++;
	}
	return (n / 4);
}

void	ft_fill_side(int *side, char **input, int size)
{
	char	*s;
	int		i;

	s = *input;
	i = 0;
	while (i < size)
	{
		if ('0' <= *s && *s <= '9')
		{
			side[i] = *s - '0';
			i++;
		}
		s++;
	}
	*input = s;
}

int	**ft_sides(int **sides, char *input, int size)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		sides[i] = malloc(size * sizeof(int));
		if (sides[i] == NULL)
			return (NULL);
		ft_fill_side(sides[i], &input, size);
		i++;
	}
	return (sides);
}