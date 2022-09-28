/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 23:22:47 by sleon             #+#    #+#             */
/*   Updated: 2022/02/04 23:28:42 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;
	int	d;
	int	q;
	int	w;

	c = *a;
	d = *b;
	q = c;
	w = d;
	*a = w;
	*b = q;
}