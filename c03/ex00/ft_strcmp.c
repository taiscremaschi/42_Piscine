/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:25:10 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/02/09 15:46:50 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	posi;

	posi = 0;
	while (s1[posi] == s2[posi] && (s1[posi] != '\0' && s2[posi] != '\0'))
	{
		posi++;
	}
	return (s1[posi] - s2[posi]);
}

/*int	main()
{
	char	*s1 = "tatazinha";
	char	*s2 = "tata";

	printf("%d",ft_strcmp(s1, s2));
}*/
