/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erut <erut@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 11:45:07 by erut              #+#    #+#             */
/*   Updated: 2023/01/26 14:40:11 by erut             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i[2];
	char	*sub;

	i[0] = 0;
	i[1] = start;
	if (!s)
		return (NULL);
	sub = malloc(sizeof(char) * (1 + len));
	if (!sub)
		return (NULL);
	while (ft_strlen(s) > i[1] && i[0] < len)
	{
		sub[i[0]] = s[i[1]];
		i[0]++;
		i[1]++;
	}
	sub[i[0]] = '\0';
	return (sub);
}
