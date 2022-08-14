/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahmadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:01:50 by aahmadi           #+#    #+#             */
/*   Updated: 2022/07/14 12:01:53 by aahmadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	if (size != '\0')
	{
		while (src[i] != '\0' && i < size - 1)
		{
			i++;
		}
		dest[i] = src[i];
		while (src[i] != '\0')
		{
			dest[i] = '\0';
			i++;
		}
		return (*dest);
	}
}
