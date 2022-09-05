/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:56:02 by hugrene           #+#    #+#             */
/*   Updated: 2022/04/26 11:56:16 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lds;

	lds = (t_list *) malloc(sizeof(*lds));
	if (!lds)
		return (NULL);
	lds->content = content;
	lds->next = NULL;
	return (lds);
}
