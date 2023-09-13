/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:46:16 by bmoretti          #+#    #+#             */
/*   Updated: 2023/09/05 15:17:27 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	tester;
	int	half_nb;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	tester = 3;
	half_nb = nb / 2;
	while (tester <= half_nb)
	{
		if (nb % tester == 0)
			return (0);
		tester += 2;
	}
	return (1);
}
