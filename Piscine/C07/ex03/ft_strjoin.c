/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <brmoretti@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:28:34 by bmoretti          #+#    #+#             */
/*   Updated: 2023/09/12 22:49:19 by bmoretti         ###   ########.fr       */
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

void	ft_concat(char *dst, char *src)
{
	while (*dst)
		dst++;
	while (*src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		msize;
	char	*str;

	msize = ft_strlen(sep) * (size - 1) + 1;
	i = 0;
	while (i < size)
	{
		msize += ft_strlen(strs[i]);
		i++;
	}
	str = malloc(msize * sizeof(char));
	if (str == NULL)
		return (NULL);
	*str = '\0';
	i = 0;
	while (i < size)
	{
		ft_concat(str, strs[i]);
		if (i + 1 < size)
			ft_concat(str, sep);
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "hello";
	char	str2[] = "world";
	char	str3[] = "42 is fun!";
	char	**strs;
	char	*str;

	strs = malloc(3 * sizeof(char *));
	strs[0] = str1;
	strs[1] = str2;
	strs[2] = str3;
	str = ft_strjoin(3, strs, "\n\n");
	printf("%s\n", str);
	free(str);
	free(strs);
	return (0);
}
*/