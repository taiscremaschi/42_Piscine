/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:55:16 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/02/09 21:32:03 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	posi;
	int	posic;

	posi = 0;
	posic = 0;
	while (dest[posi] != '\0')
	{
		posi ++;
	}
	while (src[posic] != '\0')
	{
		dest[posi] = src[posic];
		posic++;
		posi++;
	}
	dest[posi] = '\0';
	return (dest);
}

/*#include <stdio.h>

int	main()
{
	char	dest[20] = "tata";
	char	*src = "zinha";

	printf("result: %s", ft_strcat(dest, src));
	return (0);
}*/
