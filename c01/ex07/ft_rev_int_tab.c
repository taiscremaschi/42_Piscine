/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:17:41 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/02/02 17:34:02 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	clone;
	int	cont;

	cont = 0;
	while (cont < size / 2)
	{
		clone = tab[cont];
		tab[cont] = tab[size - 1 - cont];
		tab[size - 1 - cont] = clone;
		cont++;
	}
}
