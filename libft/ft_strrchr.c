/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 16:12:37 by gvilcean          #+#    #+#             */
/*   Updated: 2017/12/18 16:30:33 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			tmp = (char*)&(s[i]);
		}
		i++;
	}
	if (tmp != NULL)
		return (tmp);
	if (s[i] == (char)c)
		return (char*)&s[i];
	return (NULL);
}
