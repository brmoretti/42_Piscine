/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:11:25 by bmoretti          #+#    #+#             */
/*   Updated: 2023/08/24 10:59:59 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(' ' <= *str && *str <= '~'))
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
	int		is_printable;

	str = " ~";
	is_printable = ft_str_is_printable(str);
	printf("Range of printable characters:\n");
	printf("Input: %s\n", str);
	printf("Output: %d\n\n", is_printable);

	str = "new line\ntest";
	is_printable = ft_str_is_printable(str);
	printf("Not only lowercases:\n");
	printf("Input: %s\n", str);
	printf("Output: %d\n\n", is_printable);

	str = "";
	is_printable = ft_str_is_printable(str);
	printf("Null string:\n");
	printf("Input: %s\n", str);
	printf("Output: %d\n\n", is_printable);

	return (0);
}
*/
