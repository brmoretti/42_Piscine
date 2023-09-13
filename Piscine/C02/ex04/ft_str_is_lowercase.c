/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 09:47:05 by bmoretti          #+#    #+#             */
/*   Updated: 2023/08/25 15:35:27 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!('a' <= *str && *str <= 'z'))
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
	char *str;
	int is_lowercase;

	str = "qwertyuiopasdfghjklzxcvbnm";
	is_lowercase = ft_str_is_lowercase(str);
	printf("All lowercases:\n");
	printf("Input: %s\n", str);
	printf("Output: %d\n\n", is_lowercase);

	str = "capsLOCK";
	is_lowercase = ft_str_is_lowercase(str);
	printf("Not only lowercases:\n");
	printf("Input: %s\n", str);
	printf("Output: %d\n\n", is_lowercase);

	str = "";
	is_lowercase = ft_str_is_lowercase(str);
	printf("Null string:\n");
	printf("Input: %s\n", str);
	printf("Output: %d\n\n", is_lowercase);

	return (0);
}
*/
