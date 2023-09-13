/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:06:10 by bmoretti          #+#    #+#             */
/*   Updated: 2023/09/05 15:17:11 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	tester;
	int	squared;

	if (nb <= 0)
		return (0);
	squared = 0;
	tester = 1;
	while (squared <= nb && tester <= 46340)
	{
		squared = tester * tester;
		if (squared == nb)
			return (tester);
		tester++;
	}
	return (0);
}
