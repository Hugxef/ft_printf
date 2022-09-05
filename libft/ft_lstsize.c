/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:57:03 by hugrene           #+#    #+#             */
/*   Updated: 2022/04/26 11:57:07 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lds)
{
	int		i;
	t_list	*lsd;

	lsd = lds;
	i = 0;
	while (lsd)
	{
		lsd = lsd->next;
		i++;
	}
	return (i);
}
