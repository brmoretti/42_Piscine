/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <brmoretti@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:57:54 by bmoretti          #+#    #+#             */
/*   Updated: 2023/09/12 18:54:43 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;

	if (min >= max)
		return (NULL);
	ptr = malloc((max - min) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*ptr;
	int	i = 0;
	int	min = 0;
	int	max = 3;

	ptr = ft_range(0, 3);
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