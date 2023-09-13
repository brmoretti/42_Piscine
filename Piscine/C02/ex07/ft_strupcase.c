/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:12:08 by bmoretti          #+#    #+#             */
/*   Updated: 2023/08/24 12:45:51 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*original_address;

	original_address = str;
	while (*str != '\0')
	{
		if ('a' <= *str && *str <= 'z')
			*str = *str - 32;
		str++;
	}
	return (original_address);
}
/*
#include <stdio.h>

int	main(void)
{
	char	input[] = "MaRViN!";
	char	*output;

	printf("%s\n", input);
	output = ft_strupcase(input);
	printf("%s\n", output);
	return (0);
}
*/
