/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahmadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:32:08 by aahmadi           #+#    #+#             */
/*   Updated: 2022/07/11 14:32:11 by aahmadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int	res;
	int	i;

	res = 1;
	i = 0;
	while (++i < n)
	{
		res *= 10;
		ft_putchar(res);
		ft_putchar(i);
	}
}

/*void	ft_print_combn(int n)
{
	int	i;
	int	vmax;

	i = 0;
	vmax = max(n);
	while(i < vmax)
	{
		ft_putchar(1, &vmax, 1);
	}
}*/

void    display_combn(int n)
{
  int   vmax = 10;
  int   i = 1;
 
  while(++i < n)
    {
      	vmax *= 10;
    }
  i = 1;
  while(++i < vmax)
    {
 		ft_putchar(n);
    }
}

void	main(void)
{
	display_combn(2);
}
