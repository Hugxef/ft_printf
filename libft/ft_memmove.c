/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:59:31 by hugrene           #+#    #+#             */
/*   Updated: 2022/04/26 11:59:33 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*dst_c;
	const unsigned char	*src_c;

	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		dst_c = dst + n;
		src_c = src + n;
		while (n-- > 0)
		{
			*--dst_c = *--src_c;
		}
	}
	else
	{
		dst_c = dst;
		src_c = src;
		while (n-- > 0)
			*dst_c++ = *src_c++;
	}
	return (dst);
}
