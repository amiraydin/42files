/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahmadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:14:14 by aahmadi           #+#    #+#             */
/*   Updated: 2022/07/21 18:25:04 by aahmadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_table(char **tab, int size)
{
	int		i;
	int		j;
	int		next_index;
	char	*temp;

	i = 0;
	while (i < size)
	{
		next_index = i;
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(tab[next_index], tab[j]) > 0)
				next_index = j;
			j++;
		}
		temp = tab[i];
		tab[i] = tab[next_index];
		tab[next_index] = temp;
		i++;
	}
}

int	main(int ac, char *av[])
{
	int	i;

	if (ac < 1)
		return (0);
	if (ac == 2)
		ft_putstr(av[1]);
	else
	{
		ft_sort_table(&av[1], ac - 1);
		i = 1;
		while (i < ac)
		{
			ft_putstr(av[i]);
			i++;
		}
	}
	return (0);
}
