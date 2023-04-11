/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:30:51 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/02/12 03:26:25 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	posi;
	int	c;

	posi = 0;
	c = 0;
	if (to_find[c] == '\0')
	{
		return (str);
	}
	while (str[posi] != '\0')
	{
		while (str[posi + c] == to_find[c] && str[posi + c] != '\0')
		{
			c++;
		}
		if (to_find[c] == '\0')
		{
			return (str + posi);
		}
		posi++;
		c = 0;
	}
	return (0);
}
