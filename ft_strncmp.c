/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erut <erut@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:38:42 by erut              #+#    #+#             */
/*   Updated: 2023/01/26 14:33:19 by erut             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && n > 0)
	{
		if (s1[i] == s2[i])
		{
			i++;
			n--;
		}
		else
		{
			return (((unsigned char)s1[i] - (unsigned char)s2[i]));
		}
	}
	return (0);
}
