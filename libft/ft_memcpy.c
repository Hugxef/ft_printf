/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:58:55 by hugrene           #+#    #+#             */
/*   Updated: 2022/04/26 11:58:57 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dst_c;
	const unsigned char	*src_c;

	if (!dst && !src)
		return (0);
	dst_c = dst;
	src_c = src;
	while (n-- > 0)
		*dst_c++ = *src_c++;
	return (dst);
}
