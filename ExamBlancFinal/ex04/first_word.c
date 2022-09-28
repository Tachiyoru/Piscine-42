/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 12:18:02 by sleon             #+#    #+#             */
/*   Updated: 2022/02/24 19:24:29 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_last(char *str)
{
	int	i;

	i = 0;
	while (str[i] == 32)
		i++;
	while (str[i] && str[i] != 32)
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_last(av[1]);
	ft_putchar('\n');
	return 0;
}
