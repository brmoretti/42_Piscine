/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <brmoretti@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:50:10 by bmoretti          #+#    #+#             */
/*   Updated: 2023/09/13 15:25:20 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str); //strings.c

int	ft_error(void)
{
	ft_putstr("Error\n");
	return (1);
}

int	ft_check_digits(char *input)
{
	int	n;
	int	digit;

	digit = 1;
	n = 0;
	while (*input)
	{
		if ('0' <= *input && *input <= '9' && digit)
		{
			n++;
			digit = 0;
		}
		else if (*input == ' ' && !digit)
			digit = 1;
		else
			return (0);
		input++;
	}
	if (n == 0 || n % 4 != 0 || digit)
		return (0);
	return (1);
}