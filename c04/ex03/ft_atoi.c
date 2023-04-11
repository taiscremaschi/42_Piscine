/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:34:42 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/02/12 03:39:01 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	posi;
	int	sinal;
	int	result;

	posi = 0;
	sinal = 1;
	result = 0;
	while (str[posi] == ' ' || (str[posi] >= 9 && (str[posi] <= 13)))
		posi++;
	while (str[posi] == '+' || str[posi] == '-')
	{
		if (str[posi] == '-')
		{
			sinal *= -1;
		}
			posi++;
	}
	while (str[posi] >= '0' && str[posi] <= '9')
	{
		result = result * 10;
		result = result + (str[posi] - '0');
		posi++;
	}
	return (result * sinal);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
 	 printf("%d", ft_atoi(" 1234ab567"));
}*/
