/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 15:30:04 by bmoretti          #+#    #+#             */
/*   Updated: 2023/08/30 12:09:16 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	current_char;

	current_char = 'a';
	while (current_char <= 'z')
	{
		write(1, &current_char, 1);
		current_char++;
	}
}
