/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 10:43:18 by sleon             #+#    #+#             */
/*   Updated: 2022/02/06 12:05:52 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	reva;
	int	b;

	a = 0;
	reva = size - 1;
	while (a < (size / 2))
	{
		b = tab[a];
		tab[a] = tab[reva];
		tab[reva] = b;
		a++;
		reva--;
	}
}
