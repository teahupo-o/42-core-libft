/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erut <erut@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:21:48 by erut              #+#    #+#             */
/*   Updated: 2023/01/16 11:31:39 by erut             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
#include "libft.h"


void	*ft_calloc(size_t count, size_t size)
{
	void	*blank;

	blank = (void*)malloc(count * size);
	if (blank == 0)
	{
		return (NULL);
	}
	ft_bzero(blank, count);
	return (blank);
}