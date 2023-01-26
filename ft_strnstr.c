/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erut <erut@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:37:17 by erut              #+#    #+#             */
/*   Updated: 2023/01/26 14:54:59 by erut             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i[2];

	i[0] = 0;
	if (!len)
		return (NULL);
	while (big[i[0]] && len > 0 && i[0] < len)
	{
		i[1] = 0;
		while (little[i[1]] && little[i[1]] == big[i[0] + i[1]]
			&& (i[0] + i[1]) < len)
		{
			i[1]++;
		}
		if (!little[i[1]])
		{
			return ((char *)(big + i[0]));
		}
		i[0]++;
	}
	return (NULL);
}
