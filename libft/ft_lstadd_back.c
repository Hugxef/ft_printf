/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:51:24 by hugrene           #+#    #+#             */
/*   Updated: 2022/04/26 11:51:27 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lsd, t_list *n)
{
	t_list	*lds;

	if (lsd)
	{
		if (*lsd == NULL)
			*lsd = n;
		else
		{
			lds = ft_lstlast(*(lsd));
			lds->next = n;
		}
	}
}
