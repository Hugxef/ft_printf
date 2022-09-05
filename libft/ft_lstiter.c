/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:54:20 by hugrene           #+#    #+#             */
/*   Updated: 2022/04/26 11:54:21 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lsd, void (*f)(void *))
{
	if (!lsd || !f)
		return ;
	while (lsd)
	{
		f(lsd->content);
		lsd = lsd->next;
	}
}
