/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erut <erut@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 11:44:25 by erut              #+#    #+#             */
/*   Updated: 2023/01/26 14:17:46 by erut             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	if (!s || !f)
		return (NULL);
	str = ft_strdup(s);
	if (!str)
		return (NULL);
	i = 0;
	while (str[i])
	{
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
}
