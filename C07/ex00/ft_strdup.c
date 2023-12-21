/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <brmoretti@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:57:41 by bmoretti          #+#    #+#             */
/*   Updated: 2023/09/12 19:26:43 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	dup = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*dup1;
	char	*dup2;
	char	str[] = "test";

	dup1 = ft_strdup(str);
	dup2 = strdup(str);
	printf("%s\n", dup1);
	printf("%s\n", dup2);
	free(dup1);
	free(dup2);
	return (0);
}
*/