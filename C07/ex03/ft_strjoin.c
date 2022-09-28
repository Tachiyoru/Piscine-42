/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:02:18 by sleon             #+#    #+#             */
/*   Updated: 2022/02/24 11:09:12 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_count_size(char **strs, int size, int sep_size)
{
	int	total_size;
	int	i;

	total_size = 0;
	i = 0;
	while (i < size)
	{
		total_size += ft_strlen(strs[i]);
		total_size += sep_size;
		i++;
	}
	total_size -= sep_size;
	return (total_size);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*full_chain;
	char	*string;
	int		i;
	int		full_size;

	if (size == 0)
		return (malloc(sizeof(char)));
	full_size = ft_count_size(strs, size, ft_strlen(sep));
	string = malloc(sizeof(char) * full_size + 1);
	if (string == 0)
		return (0);
	full_chain = string;
	i = -1;
	while (i++ < size)
	{
		ft_strcpy(full_chain, strs[i]);
		full_chain += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(full_chain, sep);
			full_chain += ft_strlen(sep);
		}
	}
	full_chain = '\0';
	return (string);
}
