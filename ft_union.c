/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_union.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:18:33 by sleon             #+#    #+#             */
/*   Updated: 2022/02/23 21:07:35 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check(char *str1, char c, int index)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < index)
	{	
		if (str1[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while(s1[i])
	{
		if (ft_check(s1, s1[i], i) == 1)
			write(1, &s1[i], 1);
                i++;
        }
	j = i;
	i = 0;
	while (s2[i])
	{
		if (ft_check(s2, s2[i], i) == 1)
		{
			if (ft_check(s1, s2[i], j) == 1)
				write(1, &s2[i], 1);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
