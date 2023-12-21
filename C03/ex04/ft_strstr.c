/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 17:38:55 by bmoretti          #+#    #+#             */
/*   Updated: 2023/09/04 17:13:59 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_equal(char *str, char *compare)
{
	while (*compare)
	{
		if (*compare != *str)
			return (0);
		str++;
		compare++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (!*to_find)
		return (str);
	while (*str)
	{
		if (ft_check_equal(str, to_find))
			return (str);
		str++;
	}
	return (0);
}
