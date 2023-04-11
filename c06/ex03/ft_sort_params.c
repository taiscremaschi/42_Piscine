/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:11:25 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/02/13 23:54:27 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	copi(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

int	ft_strcmp(char *str, char *str2)
{
	int	i;

	i = 0;
	while (str[i] == str2[i] && str[i] != '\0')
	{
		i++;
	}
	return (str[i] - str2[i]);
}

int	main(int argc, char **argv)
{
	int	c1;
	int	c2;

	c1 = 1;
	c2 = 0;
	while (c1 < argc - 1)
	{
		if (ft_strcmp(argv[c1], argv[c1 + 1]) > 0)
		{
			swap(&argv[c1], &argv[c1 + 1]);
			c1 = 0;
		}
		c1++;
	}
	c1 = 1;
	while (argv[c1] && c1 < argc)
	{
		copi(argv[c1]);
		c1++;
	}
	return (0);
}
