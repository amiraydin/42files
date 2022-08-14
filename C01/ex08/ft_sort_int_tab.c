/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahmadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:37:40 by aahmadi           #+#    #+#             */
/*   Updated: 2022/07/12 12:37:43 by aahmadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min_max;

	i = 0;
	while (i < size - 1)
	{
		min_max = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[min_max])
			{
				min_max = j;
			}
			j++;
		}
		ft_swap(&tab[i], &tab[min_max]);
		i++;
	}
}
