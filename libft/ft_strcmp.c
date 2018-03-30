/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 17:27:17 by gvilcean          #+#    #+#             */
/*   Updated: 2017/12/18 21:14:07 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	if (s1[i] == 0 && s2[i] == 0)
		return (0);
	if (s1[i] == 0 && s2[i] != 0)
		return (-1 * (int)(unsigned char)(s2[i]));
	if (s1[i] != 0 && s2[i] == 0)
		return ((unsigned char)(s1[i]));
	if (s1[i] != 0 && s2[i] != 0)
		return ((unsigned char)(s1[i]) - (unsigned char)s2[i]);
	return (0);
}
