/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 19:55:04 by gvilcean          #+#    #+#             */
/*   Updated: 2017/12/22 11:33:22 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t index;

	if (s1 == NULL && s2 == NULL)
		return (1);
	if (s1 == NULL || s2 == NULL)
		return (0);
	if (n == 0)
		return (1);
	index = 0;
	while (s1[index] == s2[index] && index < n &&
			s1[index] != '\0' && s2[index] != '\0')
	{
		index++;
		if (index == n)
			return (1);
	}
	return (s1[index] == s2[index]);
}
