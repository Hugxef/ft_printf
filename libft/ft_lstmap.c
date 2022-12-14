/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:55:36 by hugrene           #+#    #+#             */
/*   Updated: 2022/04/26 11:55:37 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lsd, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*lds;

	if (!lsd || !f)
		return (NULL);
	new = ft_lstnew(f(lsd->content));
	if (!new)
		return (NULL);
	lds = new;
	lsd = lsd->next;
	while (lsd)
	{
		lds->next = ft_lstnew(f(lsd->content));
		if (!lds->next)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		lds = lds->next;
		lsd = lsd->next;
	}
	return (new);
}
