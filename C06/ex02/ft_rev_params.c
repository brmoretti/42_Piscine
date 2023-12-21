/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:04:34 by bmoretti          #+#    #+#             */
/*   Updated: 2023/09/06 17:17:49 by bmoretti         ###   ########.fr       */
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
	while (*argv)
		argv++;
	argv--;
	while (argc-- > 1)
	{
		ft_print_w_new_line(*argv);
		argv--;
	}
	return (0);
}
