/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:43:35 by bmoretti          #+#    #+#             */
/*   Updated: 2023/09/06 17:26:33 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_w_new_line(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	(void)argc;
	argv++;
	while (*argv)
	{
		ft_print_w_new_line(*argv);
		argv++;
	}
	return (0);
}
