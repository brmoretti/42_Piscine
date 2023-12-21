/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 15:59:56 by bmoretti          #+#    #+#             */
/*   Updated: 2023/09/05 15:59:48 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_treat_negative(int *nbr)
{
	if (*nbr < 0)
	{
		write(1, "-", 1);
		*nbr *= -1;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	digit;
	int		base_nbr;

	base_nbr = ft_define_base(base);
	if (base_nbr == 0 || base_nbr == 1)
		return ;
	if (nbr == -2147483648)
	{
		ft_putnbr_base(nbr / base_nbr, base);
		ft_putnbr_base((nbr % base_nbr) * -1, base);
		return ;
	}
	ft_treat_negative(&nbr);
	if (nbr >= base_nbr)
		ft_putnbr_base(nbr / base_nbr, base);
	else
	{
		digit = base[nbr];
		write(1, &digit, 1);
		return ;
	}
	ft_putnbr_base(nbr % base_nbr, base);
}
