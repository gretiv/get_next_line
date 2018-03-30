/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 16:18:13 by gvilcean          #+#    #+#             */
/*   Updated: 2018/02/19 14:54:17 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	d;
	int		i;
	int		len;

	len = ft_strlen(s);
	d = (char)c;
	i = 0;
	while (i <= len)
	{
		if (s[i] == d)
			return ((char*)(s + i));
		i++;
	}
	return (NULL);
}
