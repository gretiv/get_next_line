/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 20:03:25 by gvilcean          #+#    #+#             */
/*   Updated: 2017/12/19 20:12:27 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	min(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

static void	ft_set_ij(size_t *i, size_t *j)
{
	*i = 0;
	*j = 0;
}

static void	set_j_start_icpy(size_t *j, size_t *s, size_t *c, size_t i)
{
	*j = 0;
	*s = i;
	*c = i;
}

static void	ft_inc_icpy_j(size_t *icpy, size_t *j)
{
	(*icpy)++;
	(*j)++;
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	start;
	size_t	icpy;
	char	*ptr;

	ft_set_ij(&i, &j);
	ptr = (char *)haystack;
	if (*haystack == '\0' && *needle == '\0')
		return (ptr + min(ft_strlen(haystack), n));
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i + ft_strlen(needle) - 1 < n)
	{
		set_j_start_icpy(&j, &start, &icpy, i);
		while (haystack[icpy] == needle[j] && haystack[icpy] != '\0' &&
				needle[j] != '\0')
			ft_inc_icpy_j(&icpy, &j);
		if (needle[j] == '\0')
			return ((char *)haystack + start);
		i++;
	}
	return (NULL);
}
