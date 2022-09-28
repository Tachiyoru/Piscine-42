/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 19:54:59 by sleon             #+#    #+#             */
/*   Updated: 2022/02/07 10:41:29 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_verif_tab(int *tab, int size)
{
	int	i;
	int	x;

	x = -1;
	i = 0;
	while (++i < size)
	{
		if (tab[++x] >= tab[i])
			return (0);
	}	
	return (1);
}

void	ft_print_comb(int *tab, int size)
{
	int	i;

	i = -1;
	if (ft_verif_tab(tab, size) == 1)
	{
		while (++i < size)
			ft_putchar(tab[i] + '0');
		if (!(tab[0] == 10 - size))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}	
	}
}

void	ft_count_tab(int *tab, int n)
{
	int	i;

	i = 0;
	while (tab[0] <= 10 - n)
	{
		ft_print_comb(tab, n);
		tab[n - 1]++;
		i = n - 1;
		while (i > 0)
		{
			if (tab[i] > 9)
			{
				tab[i] = 0;
				tab[i - 1]++;
			}
			i--;
		}
	}
}

void	ft_print_combn(int n)
{	
	int	i;	
	int	tab[9];

	i = -1;
	if (0 < n && n < 10)
	{
		while (++i < n)
			tab[i] = i;
		ft_count_tab(tab, n);
	}	
}
//int main() {ft_print_combn(9);}
