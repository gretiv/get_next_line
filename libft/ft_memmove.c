/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 16:22:34 by gvilcean          #+#    #+#             */
/*   Updated: 2017/12/18 16:32:51 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;

	if (dest > src && dest < src + n)
	{
		i = n - 1;
		while (i >= (size_t)(dest - src))
		{
			*((char *)dest + i) = *((char *)src + i);
			i--;
		}
		n = dest - src;
	}
	i = 0;
	while (i < n)
	{
		*((char *)dest + i) = *((char *)src + i);
		i++;
	}
	return (dest);
}
