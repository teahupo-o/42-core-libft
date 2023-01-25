/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erut <erut@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 11:39:35 by erut              #+#    #+#             */
/*   Updated: 2023/01/25 12:59:32 by erut             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	put_num(long num, char *str, int str_len)
{
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	if (num >= 10)
	{
		put_num(num / 10, str, str_len - 1);
		put_num(num % 10, str, str_len);
	}
	if (num < 10)
		str[str_len - 1] = num + 48;
}

int	len_num(long num)
{
	size_t	i;

	i = 0;
	if (num < 0 || num == 0)
		i++;
	while (num != 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*final;
	long	x;
	int		len;

	x = n;
	len = len_num(x);
	final = malloc((len + 1) * sizeof(char));
	if (!final)
		return (NULL);
	put_num(x, final, len);
	final[len] = '\0';
	return (final);
}
