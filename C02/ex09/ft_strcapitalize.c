/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:54:14 by bmoretti          #+#    #+#             */
/*   Updated: 2023/08/25 15:35:09 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char	*original_address;
	int		capitalize;

	capitalize = 1;
	original_address = str;
	while (*str != '\0')
	{
		if ('0' <= *str && *str <= '9')
			capitalize = 0;
		else if ('a' <= *str && *str <= 'z' && capitalize == 1)
		{
			*str = *str - 32;
			capitalize = 0;
		}
		else if (!('a' <= *str && *str <= 'z'))
			capitalize = 1;
		str++;
	}
	return (original_address);
}
/*
#include <stdio.h>

int	main(void)
{
	char	input[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	*output;

	printf("%s\n", input);
	output = ft_strcapitalize(input);
	printf("%s\n", output);
	return (0);
}
*/
