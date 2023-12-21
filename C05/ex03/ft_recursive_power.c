/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:21:21 by bmoretti          #+#    #+#             */
/*   Updated: 2023/09/05 15:28:20 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	mult;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	mult = ft_recursive_power(nb, power - 1);
	return (nb * mult);
}
