/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erut <erut@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:53:55 by erut              #+#    #+#             */
/*   Updated: 2023/01/13 13:11:08 by erut             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memcpy(void *first, const void *sec, size_t n)
{
	size_t	i;

	if (first == NULL && sec == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (n--)
	{
		((unsigned char *)first)[i] = ((unsigned char *)sec)[i];
		i++;
	}
	return (first);
}
