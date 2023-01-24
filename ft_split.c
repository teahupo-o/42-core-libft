/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erut <erut@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 11:42:35 by erut              #+#    #+#             */
/*   Updated: 2023/01/24 18:33:33 by erut             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_w(char const *s, char c)
{
	size_t	i[3];

	i[0] = 0;
	i[1] = 0;
	i[2] = 0;
	while (s[i[0]])
	{
		if (s[i[0]] != c && i[2] == 0)
		{
			i[2] = 1;
			i[1]++;
		}
		else if (s[i[0]] == c)
		{
			i[2] = 0;
		}
		i[0]++;
	}
	return (i[1]);
}

static char	*dump_it(const char *full, int start, int end)
{
	char	*part;
	size_t	i[2];

	i[0] = end - start;
	part = malloc((i[0] + 1) * sizeof(char));
	i[1] = 0;
	while (i[0])
	{
		part[i[1]] = full[start++];
		i[1]++;
		i[0]--;
	}
	part[i[1]] = 0;
	return (part);
}

char	**ft_split(char const *s, char c)
{
	char	**final;
	size_t	i;
	size_t	y;
	size_t	words;
	size_t	index;

	final = malloc(((words = count_w(s, c)) + 1) * sizeof(char *));
	if (!final)
		return (NULL);
	y = 0;
	i = 0;
	index = 0;
	while (words)
	{
		while (s[i] == c)
			i++;
		y = i;
		while (s[i] != c)
			i++;
		final[index] = dump_it(s, y, i);
		words--;
		index++;
	}
	final[index] = 0;
	return (final);
}
