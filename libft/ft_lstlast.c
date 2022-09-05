/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:54:59 by hugrene           #+#    #+#             */
/*   Updated: 2022/04/26 11:55:14 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lsd)
{
	while (lsd)
	{
		if (!lsd->next)
			return (lsd);
		lsd = lsd->next;
	}
	return (lsd);
}
