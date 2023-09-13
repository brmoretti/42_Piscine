/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:02:36 by bmoretti          #+#    #+#             */
/*   Updated: 2023/09/05 15:59:56 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_read_number(char *str_nb)
{
	int	nb;
	int	unit;

	nb = 0;
	unit = 0;
	while ('0' <= *str_nb && *str_nb <= '9')
	{
		unit = *str_nb - '0';
		nb = nb * 10 + unit;
		str_nb++;
	}
	return (nb);
}

int	ft_atoi(char *str)
{
	int	sign;

	while (*str == ' ' || (9 <= *str && *str <= 13))
		str++;
	sign = 1;
	while (*str)
	{
		if (*str == '-' || *str == '+')
			sign *= 44 - *str;
		else if ('0' <= *str && *str <= '9')
			return (ft_read_number(str) * sign);
		else
			return (0);
		str++;
	}
	return (0);
}
