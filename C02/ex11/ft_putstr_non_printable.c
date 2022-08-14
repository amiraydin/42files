/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahmadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 14:01:12 by aahmadi           #+#    #+#             */
/*   Updated: 2022/07/14 14:01:15 by aahmadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > '\0' && str[i] < ' ')
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] += 32;
			}
		}
		else if (str[i] >= ' ' && str[i] <= '~')
			i++;
	}
	ft_putchar(str);
}
