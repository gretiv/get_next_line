/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 19:53:06 by gvilcean          #+#    #+#             */
/*   Updated: 2017/12/19 19:54:14 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	size;
	size_t	index;
	char	*mapped;

	if (s == NULL)
		return (NULL);
	size = 0;
	while (s[size] != '\0')
		size++;
	mapped = (char *)malloc(sizeof(char) * (size + 1));
	if (mapped == NULL)
		return (NULL);
	index = 0;
	while (index < size)
	{
		mapped[index] = (*f)((unsigned int)index, s[index]);
		index++;
	}
	mapped[index] = '\0';
	return (mapped);
}
