/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahmadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:25:33 by aahmadi           #+#    #+#             */
/*   Updated: 2022/07/18 20:25:36 by aahmadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	nbn;

	nbn = nb;
	if (nbn < 0)
	{
		ft_putchar('-');
		nbn = nbn * -1;
	}
	if (nbn >= 10)
	{
		ft_putnbr(nbn / 10);
	}
	ft_putchar(nbn % 10 + '0');
}
