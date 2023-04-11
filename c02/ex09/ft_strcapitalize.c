/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:13:05 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/02/06 21:27:10 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] >= 65 && str[cont] <= 90)
		{
			str[cont] += 32;
		}
		else
		{
			cont++;
		}
	}
	return (str);
}

void	function(int posi, int letra, char *str)
{
	while (str[posi] != '\0')
	{
		if ((str[posi] >= 'a' && str[posi] <= 'z')
			|| (str[posi] >= 'A' && str[posi] <= 'Z'))
		{
			if (letra == 0)
			{
				str[posi] = str[posi] - 32;
				letra++;
				posi++;
			}
			else
				posi++;
		}
		else if (!(str[posi] >= '0' && str[posi] <= '9'))
		{
			letra = 0;
			posi ++;
		}
		else
		{
			letra++;
			posi++;
		}
	}
}

char	*ft_strcapitalize(char *str)
{
	int	posi;
	int	letra;

	posi = 0;
	letra = 0;
	ft_strlowcase(str);
	function(posi, letra, str);
	return (str);
}
