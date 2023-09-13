/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:55:17 by bmoretti          #+#    #+#             */
/*   Updated: 2023/09/06 17:54:38 by bmoretti         ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	if (*s1 != '\0' && *s2 != '\0')
		return (*s1 - *s2);
	else if (*s1 != '\0')
		return (*s1);
	else
		return (-*s2);
}

void	ft_sort_args(char *argv[])
{
	int		i;
	int		j;
	char	*swap;

	i = 0;
	j = 0;
	while (argv[i + 1] != NULL)
	{
		j = i + 1;
		while (argv[j] != NULL)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				swap = argv[i];
				argv[i] = argv[j];
				argv[j] = swap;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc >= 3)
		ft_sort_args(argv + 1);
	i = 1;
	while (argv[i] != NULL)
	{
		ft_print_w_new_line(argv[i]);
		i++;
	}
	return (0);
}
