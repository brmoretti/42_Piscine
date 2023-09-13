/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:37:53 by bmoretti          #+#    #+#             */
/*   Updated: 2023/09/04 17:13:06 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strnlen(char *str, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size && str[i] != '\0')
		i++;
	return (i);
}

void	ft_copy(char *dest, char *src, unsigned int size)
{
	while (size > 0)
	{
		*dest = *src;
		src++;
		dest++;
		size--;
	}
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	srclen;
	unsigned int	destlen;

	srclen = ft_strlen(src);
	destlen = ft_strnlen(dest, size);
	if (destlen == size)
		return (size + srclen);
	if (srclen < size - destlen)
		ft_copy(dest + destlen, src, srclen + 1);
	else
	{
		ft_copy(dest + destlen, src, size - 1);
		dest[destlen + size - 1] = '\0';
	}
	return (destlen + srclen);
}
