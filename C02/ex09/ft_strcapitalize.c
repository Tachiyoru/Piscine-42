/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:27:04 by sleon             #+#    #+#             */
/*   Updated: 2022/02/15 18:32:08 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
	if (str[i] >= 'A' && str[i] <= 'Z')
		str[i] = str[i] + 32;
	i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	if (str[0] != '\0' && str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
		i = 1;
	while (str[i] != '\0')
	{
	if ((str[i - 1] < '0')
		||(str[i - 1] >= 58 && str[i - 1] <= 64)
		||(str[i - 1] >= 91 && str[i - 1] <= 96)
		|| (str[i - 1] > 'z'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
