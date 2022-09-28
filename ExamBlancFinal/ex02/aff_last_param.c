/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 11:51:12 by sleon             #+#    #+#             */
/*   Updated: 2022/02/24 12:10:02 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i++])
	{
		write(1, &str[i], 1);
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_putstr(argv[argc - 1]);
	if (argc <= 1)
		write(1, "\n", 1);
	return (0);
}
