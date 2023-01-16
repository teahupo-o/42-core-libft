/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erut <erut@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:28:30 by erut              #+#    #+#             */
/*   Updated: 2023/01/16 09:47:45 by erut             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void *ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t i;
	
	if (str1 == NULL || str2 == NULL)
	{
		return (NULL);
	}
	if (str1 > str2)
	{
		i = n - 1;
		while (i >= 0)
		{
			*(char*)(str1 + i) = *(char*)(str2 + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (n > i)
		{
			*(char*)(str1 + i) = *(char*)(str2 + i);
			i++;
		}
	}
	return(str1);
}
