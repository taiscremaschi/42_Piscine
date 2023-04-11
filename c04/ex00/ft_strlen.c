/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 11:02:53 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/02/13 19:09:40 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	posi;

	posi = 0;
	while (str[posi] != '\0')
	{
		posi++;
	}
	return (posi);
}

int	main()
{
	char	*str = "tata";

	printf("result: %d", ft_strlen(str));
	return (0);
}
