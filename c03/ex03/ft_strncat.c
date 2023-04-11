/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:05:08 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/02/10 19:59:26 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	posi;
	unsigned int	j;

	posi = 0;
	j = 0;
	while (dest[posi] != '\0')
	{
		posi ++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[posi + j] = src[j];
		j++;
	}
	dest[posi + j] = '\0';
	return (dest);
}

/*#include <stdio.h>

int     main()
{
        char    dest[20] = "tata";
        char    *src = "zinhalinda";
	int	nb = 5;

        printf("result: %s", ft_strncat(dest, src, nb));
        return (0);
}*/
