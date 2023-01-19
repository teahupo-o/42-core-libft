/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erut <erut@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 09:58:46 by erut              #+#    #+#             */
/*   Updated: 2023/01/19 10:27:22 by erut             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*blank;
	size_t	i;

	i = 0;
	blank = malloc(sizeof(char) * (1 + ft_strlen(s)));
	if (blank == 0)
	{
		return (NULL);
	}
	while (s[i])
	{
		blank[i] = s[i];
		i++;
	}
	blank[i] = '\0';
	return (blank);
}
