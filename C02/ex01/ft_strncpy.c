/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 07:34:15 by bmoretti          #+#    #+#             */
/*   Updated: 2023/08/24 08:00:27 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*original_address;

	original_address = dest;
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (original_address);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	source[] = "Hello World!";
	char	destination[20];
	char	destination2[20];

	printf("\nSource: %s\n\n", source);
	printf("Simple case:\n");
	ft_strncpy(destination, source, 12);
	printf("Destination ft_strcpy: %s\n", destination);
	strncpy(destination, source, 12);
	printf("Destination strcpy: %s\n", destination);

	printf("\nSource > n:\n");
	ft_strncpy(destination2, source, 5);
	printf("Destination 2: %s\n", destination2);
	strncpy(destination2, source, 5);
	printf("Destination 2 strcpy: %s\n", destination2);
	return (0);
}
*/
