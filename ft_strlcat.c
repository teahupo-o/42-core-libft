/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erut <erut@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:28:36 by erut              #+#    #+#             */
/*   Updated: 2023/01/16 11:04:49 by erut             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"


size_t	ft_strlcat(char *des, const char *src, size_t size)
{
	size_t i;
	size_t len_des;
	size_t len_src;

	i = 0;
	len_des =ft_strlen(des);
	len_src =ft_strlen(src);
	if (size < 0)
	{
		return (len_src);
	}
	while (src[i] && len_des + i < size - 1)
	{
		des[len_des + i] = src[i];
		i++;
	}
	des[len_des + i] = '\0';
	if (len_des > size)
	{
		return (len_src + size);
	}
	return (len_des + len_src);
}
