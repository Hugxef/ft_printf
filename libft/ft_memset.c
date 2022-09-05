/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:59:56 by hugrene           #+#    #+#             */
/*   Updated: 2022/04/26 12:00:19 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t d)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = b;
	while (i < d)
	{
		*p = c;
		p++;
		i++;
	}
	return (b);
}
