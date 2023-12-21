/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:47:49 by bmoretti          #+#    #+#             */
/*   Updated: 2023/08/24 12:51:49 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*original_address;

	original_address = str;
	while (*str != '\0')
	{
		if ('A' <= *str && *str <= 'Z')
			*str = *str + 32;
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
	output = ft_strlowcase(input);
	printf("%s\n", output);
	return (0);
}
*/
