/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:26:13 by sleon             #+#    #+#             */
/*   Updated: 2022/02/07 14:15:35 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_affich(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a != '9' || b != '8' || c != '9' || d != '9')
		write(1, ", ", 2);
}

void	ft_trait(int a, int c)
{
	int	b;
	int	d;

	b = a % 10;
	a = a / 10;
	d = c % 10;
	c = c / 10;
	ft_affich(a + '0', b + '0', c + '0', d + '0');
}

void	ft_print_comb2(void)
{
	int	nbs[2];

	nbs[0] = 0;
	nbs[1] = 0;
	while (nbs[0] < 99)
	{
		nbs[1] = nbs[0] + 1;
		while (nbs[1] <= 99)
		{
			ft_trait (nbs[0], nbs[1]);
			nbs[1]++;
		}
		nbs[0]++;
	}
}

//int main()
//{ft_print_comb2();}
