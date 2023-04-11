/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int-tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:58:51 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/02/05 04:36:48 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	cont;
	int	clone;

	cont = 0;
	while (cont < size - 1)
	{
		if (tab[cont] > tab[cont + 1])
		{
			clone = tab[cont];
			tab[cont] = tab[cont + 1];
			tab[cont + 1] = clone;
			cont = 0;
		}
		else
			cont++;
	}
}	
