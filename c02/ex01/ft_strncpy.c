/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:38:05 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/02/05 20:36:41 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	pozi;

	pozi = 0;
	while (src[pozi] != '\0' && pozi < n)
	{
		dest[pozi] = src[pozi];
		pozi++;
	}
	while (pozi < n)
	{
		dest[pozi] = '\0';
		pozi++;
	}
	return (dest);
}
