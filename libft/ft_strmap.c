/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 17:42:43 by gvilcean          #+#    #+#             */
/*   Updated: 2017/12/18 17:43:24 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char	const *s, char (*f)(char))
{
	size_t	size;
	size_t	index;
	char	*mapped;

	size = 0;
	index = 0;
	if (s == NULL)
		return (NULL);
	while (s[size] != '\0')
		size++;
	mapped = (char *)malloc(sizeof(char) * (size + 1));
	if (mapped == NULL)
		return (NULL);
	while (index < size)
	{
		mapped[index] = (*f)(s[index]);
		index++;
	}
	mapped[index] = '\0';
	return (mapped);
}
