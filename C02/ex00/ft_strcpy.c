/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 06:34:33 by bmoretti          #+#    #+#             */
/*   Updated: 2023/08/24 17:36:42 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*original_address;

	original_address = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_address);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	source[] = "Hello World!";
	char	destination[20];
	char	destination2[2];
	char	*add1;
	char	*add2;

	printf("Source: %s\n\n", source);
	printf("Simple case:\n");
	add1 = ft_strcpy(destination, source);
	printf("Destination ft_strcpy: %s\n", destination);
	printf("%p\n", add1);
	add2 = strcpy(destination, source);
	printf("Destination strcpy: %s\n", destination);
	printf("%p\n", add2);
	printf("\nOverflow:\n");
	ft_strcpy(destination2, source);
	printf("Destination 2: %s\n", destination2);
	strcpy(destination2, source);
	printf("Destination 2 strcpy: %s\n", destination2);
	return (0);
}
*/
