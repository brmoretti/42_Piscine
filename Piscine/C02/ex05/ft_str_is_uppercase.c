/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:06:09 by bmoretti          #+#    #+#             */
/*   Updated: 2023/08/25 15:35:44 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!('A' <= *str && *str <= 'Z'))
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
	int is_uppercase;

	str = "QWERTYUIOPASDFGHJKLZXCVBNM";
	is_uppercase = ft_str_is_uppercase(str);
	printf("All lowercases:\n");
	printf("Input: %s\n", str);
	printf("Output: %d\n\n", is_uppercase);

	str = "capsLOCK";
	is_uppercase = ft_str_is_uppercase(str);
	printf("Not only lowercases:\n");
	printf("Input: %s\n", str);
	printf("Output: %d\n\n", is_uppercase);

	str = "";
	is_uppercase = ft_str_is_uppercase(str);
	printf("Null string:\n");
	printf("Input: %s\n", str);
	printf("Output: %d\n\n", is_uppercase);

	return (0);
}
*/
