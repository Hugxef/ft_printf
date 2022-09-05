/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:03:07 by hugrene           #+#    #+#             */
/*   Updated: 2022/04/26 12:03:08 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;

	p = (char *)malloc(ft_strlen(s) + 1);
	if (p == NULL)
		return (NULL);
	ft_strlcpy(p, s, ft_strlen(s) + 1);
	return (p);
}
