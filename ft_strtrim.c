/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erut <erut@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 11:44:51 by erut              #+#    #+#             */
/*   Updated: 2023/01/26 15:34:15 by erut             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	y;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]) != NULL)
	{
		i++;
	}
	y = ft_strlen(&s1[i]);
	while (y && ft_strchr(set, s1[i + y - 1]) != NULL && s1[i + y - 1])
	{
		y--;
	}
	return (ft_substr(s1, i, y));
}
