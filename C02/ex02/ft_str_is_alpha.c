/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 08:03:07 by bmoretti          #+#    #+#             */
/*   Updated: 2023/08/24 08:44:02 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!(('a' <= *str && *str <= 'z') || ('A' <= *str && *str <= 'Z')))
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
	int		is_alpha;

	str = "MaRVin";
	is_alpha = ft_str_is_alpha(str);
	printf("Alphabetical characters:\n");
	printf("Input: %s\n", str);
	printf("Output: %d\n\n", is_alpha);

	str = "Great! 42 school!";
	is_alpha = ft_str_is_alpha(str);
	printf("Not only alphabetical characters:\n");
	printf("Input: %s\n", str);
	printf("Output: %d\n\n", is_alpha);

	str = "";
	is_alpha = ft_str_is_alpha(str);
	printf("Null string:\n");
	printf("Input: %s\n", str);
	printf("Output: %d\n\n", is_alpha);

	return (0);
}
*/
