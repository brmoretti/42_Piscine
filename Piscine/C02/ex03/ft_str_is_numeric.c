/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 08:45:33 by bmoretti          #+#    #+#             */
/*   Updated: 2023/08/24 09:06:12 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!('0' <= *str && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;
	int		is_numeric;

	str = "0123456789";
	is_numeric = ft_str_is_numeric(str);
	printf("Digits only:\n");
	printf("Input: %s\n", str);
	printf("Output: %d\n\n", is_numeric);

	str = "42 school!";
	is_numeric = ft_str_is_numeric(str);
	printf("Not only digits:\n");
	printf("Input: %s\n", str);
	printf("Output: %d\n\n", is_numeric);

	str = "";
	is_numeric = ft_str_is_numeric(str);
	printf("Null string:\n");
	printf("Input: %s\n", str);
	printf("Output: %d\n\n", is_numeric);

	return (0);
}
*/
