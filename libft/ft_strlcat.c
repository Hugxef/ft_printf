/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:04:00 by hugrene           #+#    #+#             */
/*   Updated: 2022/04/26 12:04:01 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t l)
{
	size_t	dstl;
	size_t	srcl;

	srcl = ft_strlen(src);
	dstl = ft_strlen(dst);
	if (dstl >= l)
		dstl = l;
	if (dstl == l)
		return (srcl + l);
	if (srcl < l - dstl)
	{
		ft_memcpy(dst + dstl, src, srcl);
		dst[dstl + srcl] = '\0';
	}
	else
	{
		ft_memcpy(dst + dstl, src, l - dstl - 1);
		dst[l - 1] = '\0';
	}
	return (dstl + srcl);
}
