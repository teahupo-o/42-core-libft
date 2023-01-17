/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erut <erut@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:21:48 by erut              #+#    #+#             */
/*   Updated: 2023/01/17 15:18:26 by erut             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*blank;
	size_t	i;

	i = 0;
	blank = malloc(nmemb * size);
	if (blank == 0)
	{
		return (NULL);
	}
	while (i < nmemb * size)
	{
		blank[i] = 0;
		i++;
	}
	return (blank);
}
