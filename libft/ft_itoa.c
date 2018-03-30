/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 20:50:00 by gvilcean          #+#    #+#             */
/*   Updated: 2017/12/21 20:51:52 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_itoa(int n)
{
	int		length;
	int		isneg;
	char	*fresh;

	isneg = 1;
	length = ft_numlen(n, 10);
	if (!(fresh = malloc(sizeof(char) * (length + 1))))
		return (NULL);
	if (n == 0)
		fresh[0] = '0';
	fresh[length] = '\0';
	while (n != 0)
	{
		if (n < 0)
		{
			fresh[0] = '-';
			isneg = -1;
		}
		fresh[length - 1] = (((n % 10) * (isneg)) + '0');
		n = (n / 10);
		length--;
	}
	return (fresh);
}
