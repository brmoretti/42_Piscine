/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 08:29:14 by bmoretti          #+#    #+#             */
/*   Updated: 2023/09/05 15:59:32 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_define_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = 0;
		while (j < i)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_base_value(char *c, char *base)
{
	int	value;

	value = 0;
	while (base[value])
	{
		if (*c == base[value])
			return (value);
		value++;
	}
	return (-1);
}

int	ft_read_number_base(char *str_nb, char *base, int base_nbr)
{
	int	nb;

	nb = 0;
	while (ft_base_value(str_nb, base) >= 0)
	{
		nb = nb * base_nbr + ft_base_value(str_nb, base);
		str_nb++;
	}
	return (nb);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	base_nbr;

	base_nbr = ft_define_base(base);
	if (base_nbr == 0 || base_nbr == 1)
		return (0);
	while (*str == ' ' || (9 <= *str && *str <= 13))
		str++;
	sign = 1;
	while (*str)
	{
		if (*str == '-' || *str == '+')
			sign *= 44 - *str;
		else if (ft_base_value(str, base) >= 0)
			return (ft_read_number_base(str, base, base_nbr) * sign);
		else
			return (0);
		str++;
	}
	return (0);
}
