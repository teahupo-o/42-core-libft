/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erut <erut@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 11:44:07 by erut              #+#    #+#             */
/*   Updated: 2023/01/24 12:37:10 by erut             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i[2];
	char	*str;

	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!str)
	{
		return (NULL);
	}
	i[0] = 0;
	while (s1[i[0]])
	{
		str[i[0]] = s1[i[0]];
		(i[0])++;
	}
	i[1] = 0;
	while (s2[i[1]])
	{
		str[i[0] + i[1]] = s2[i[1]];
		(i[1])++;
	}
	str[i[0] + i[1]] = '\0';
	return (str);
}
