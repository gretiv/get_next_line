/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 20:26:11 by gvilcean          #+#    #+#             */
/*   Updated: 2018/02/19 14:54:59 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	int		i;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	ptr = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	len = 0;
	while (s1[i])
	{
		ptr[len++] = s1[i++];
	}
	i = 0;
	while (s2[i])
	{
		ptr[len++] = s2[i++];
	}
	ptr[len] = '\0';
	return (ptr);
}
