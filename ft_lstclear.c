/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erut <erut@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:04:41 by erut              #+#    #+#             */
/*   Updated: 2023/01/26 15:39:21 by erut             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*save;

	if (*lst && del && lst)
	{
		while (*lst && lst)
		{
			save = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = save;
		}
		*lst = NULL;
	}
}
