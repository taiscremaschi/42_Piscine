/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:32:35 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/02/07 23:54:52 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	cont;
	unsigned int	posi;

	cont = 0;
	if (size != 0)
	{
		while (src[cont] != '\0')
		{
			cont++;
		}
		posi = 0;
		while ((src[posi] != '\0') && (posi < size - 1))
		{
			dest[posi] = src[posi];
			posi++;
		}
		while (posi < size)
		{
			dest[posi] = '\0';
			posi++;
		}
	}
	return (cont);
}
