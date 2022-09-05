/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:08:10 by hugrene           #+#    #+#             */
/*   Updated: 2022/04/26 12:08:11 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_getstr(char *str, unsigned int nbr, size_t len)
{
	while (nbr > 0)
	{
		*(str + len--) = nbr % 10 + '0';
		nbr /= 10;
	}
	return (len);
}

static size_t	ft_getlen(long n, size_t len)
{
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_uitoa(unsigned int n)
{
	size_t			len;
	char			*str;
	long			nbr;

	nbr = n;
	len = ft_getlen(n, 0);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	*(str + len--) = '\0';
	len = ft_getstr(str, nbr, len);
	*(str + len) = '0';
	return (str);
}
