/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:01:28 by hugrene           #+#    #+#             */
/*   Updated: 2022/04/26 12:01:30 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	x;
	int	endl;

	x = 0;
	endl = '\n';
	if (!s || !fd)
		return ;
	while (s[x])
	{
		write(fd, &s[x], 1);
		x++;
	}
	write(fd, &endl, 1);
}
