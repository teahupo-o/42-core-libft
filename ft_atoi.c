/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erut <erut@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:00:25 by erut              #+#    #+#             */
/*   Updated: 2023/01/17 14:16:19 by erut             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	unsigned int	i;
	int				j;
	int				final;

	i = 0;
	j = 1;
	final = 0;
	while (nptr[i] && nptr[i] <= ' ' && nptr[i] != '\e')
	{
		i++;
	}
	if (nptr[i] == 45 || nptr[i] == 43)
	{	
		if (nptr[i] == 45)
		{
			j = j * -1;
		}
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		final = final * 10 + (nptr[i] - 48);
		i++;
	}
	return (final * j);
}
