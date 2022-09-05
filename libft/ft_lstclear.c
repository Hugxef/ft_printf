/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:52:04 by hugrene           #+#    #+#             */
/*   Updated: 2022/04/26 11:52:17 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lsd, void (*del)(void *))
{
	t_list	*lds;

	if (lsd)
	{
		while (*lsd)
		{
			lds = (*lsd)->next;
			ft_lstdelone(*lsd, del);
			(*lsd) = lds;
		}
	}
}
