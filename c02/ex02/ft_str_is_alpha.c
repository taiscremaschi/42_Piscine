/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 21:58:18 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/02/06 11:04:28 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	cont;

	cont = 0;
	if (str[cont] == '\0')
	{
		return (1);
	}
	while (str[cont] != '\0')
	{
		if (str[cont] >= 'a' && str[cont] <= 'z')
		{
			cont++;
		}
		else if (str[cont] >= 'A' && str[cont] <= 'Z')
		{
			cont++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
