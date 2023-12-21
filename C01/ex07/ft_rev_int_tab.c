/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 08:19:58 by bmoretti          #+#    #+#             */
/*   Updated: 2023/09/05 19:29:03 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swap;
		i++;
	}
}
