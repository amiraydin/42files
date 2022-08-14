/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahmadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:39:21 by aahmadi           #+#    #+#             */
/*   Updated: 2022/07/12 19:39:24 by aahmadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = 0;
	while (i <= src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i <= dest[i])
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
