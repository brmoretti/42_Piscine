/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <brmoretti@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:08:41 by bmoretti          #+#    #+#             */
/*   Updated: 2023/09/12 21:44:40 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return ((*range)[i - 1] - (*range)[0] + 1);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*ptr;
	int	i = 0;
	int	min = -2;
	int	max = 3;
	int	size;

	size = ft_ultimate_range(&ptr, min, max);
	printf("Range Size: %d\n", size);
	printf("Array values:\n");
	while (i < max - min)
	{
		printf("%d ", ptr[i]);
		i++;
	}
	free(ptr);
	return (0);
}
*/