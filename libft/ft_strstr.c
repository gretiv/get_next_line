/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 16:28:30 by gvilcean          #+#    #+#             */
/*   Updated: 2017/12/19 20:02:40 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_increase(int *a, int *b)
{
	(*a)++;
	(*b)++;
}

static void	ft_put_zero(int *a, int *b)
{
	(*a) = 0;
	(*b) = 0;
}

static void	ft_jzerovari(int *j, int *start, int *icpy, int i)
{
	(*j) = 0;
	(*start) = i;
	(*icpy) = i;
}

char		*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	int		start;
	int		icpy;
	char	*ptr;

	ft_put_zero(&i, &j);
	ptr = (char *)haystack;
	if (*haystack == '\0' && *needle == '\0')
		return (ptr + ft_strlen(haystack));
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		ft_jzerovari(&j, &start, &icpy, i);
		while (haystack[icpy] == needle[j] && haystack[icpy] != '\0' &&
				needle[j] != '\0')
		{
			ft_increase(&icpy, &j);
		}
		if (needle[j] == '\0')
			return ((char *)haystack + start);
		i++;
	}
	return (NULL);
}
