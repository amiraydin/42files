/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahmadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:05:00 by aahmadi           #+#    #+#             */
/*   Updated: 2022/07/07 13:05:04 by aahmadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	table[3];

	table[0] = '0';
	while (table[0] <= '7')
	{
		table[1] = table[0] + 1;
		while (table[1] <= '8')
		{
			table[2] = table[1] + 1;
			while (table[2] <= '9')
			{
				write(1, &table[0], 1);
				write(1, &table[1], 1);
				write(1, &table[2], 1);
				if (table[0] != '7')
				{
					write(1, ", ", 2);
				}
				table[2]++;
			}
			table[1]++;
		}
		table[0]++;
	}
}
