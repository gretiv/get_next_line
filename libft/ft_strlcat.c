/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 16:52:21 by gvilcean          #+#    #+#             */
/*   Updated: 2017/12/18 16:55:46 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t dest_size;
	size_t src_size;

	src_size = ft_strlen(src);
	i = 0;
	while (dest[i] != '\0')
	{
		if (i >= size)
			return (src_size + size);
		i++;
	}
	dest_size = i;
	i = 0;
	while (dest_size + 1 + i < size && src[i] != '\0')
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	if (i + dest_size < size)
	{
		dest[dest_size + i] = '\0';
	}
	return (dest_size + src_size);
}
