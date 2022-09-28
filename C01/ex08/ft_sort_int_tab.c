/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:10:46 by sleon             #+#    #+#             */
/*   Updated: 2022/02/06 18:03:20 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a < size -1)
	{
		b = a + 1;
		while (b < size)
		{
			if (tab[a] > tab[b])
			{
				c = tab[a];
				tab[a] = tab[b];
				tab[b] = c;
			}
			b++;
		}
		a++;
	}
}
//	for(int i = 0;i <9;i++)
//		printf("%d", tab[i]);
//}
//int main ()
//{
//	int tab[9] = {5, 2, 6, 4, 1, 3, 7, 9, 8};
//		
//	ft_sort_int_tab(tab, 9);
//}
