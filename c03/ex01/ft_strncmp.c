/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 20:19:39 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/02/09 15:14:47 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	posi;
	unsigned char	a;
	unsigned char	b;

	posi = 0;
	while (posi < n && (s1[posi] != '\0' || s2[posi] != '\0'))
	{
		if (s1[posi] != s2[posi])
		{
			a = s1[posi];
			b = s2[posi];
			posi = a - b;
			return (posi);
		}
		posi++;
	}
	return (0);
}
/*#include <stdio.h>

int	main()
{
	char	*s1 = "tatazinha";
	char	*s2 = "tatzll";
	int	n = 4;

	printf("result: %d\n", ft_strncmp(s1, s2, n));
	return (0);
}*/
