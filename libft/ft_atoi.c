/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 17:15:20 by gvilcean          #+#    #+#             */
/*   Updated: 2017/12/22 11:07:08 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_characters(const char *str)
{
	if (*str == ' ' || *str == '\t' || *str == '\n'
			|| *str == '\v' || *str == '\f' || *str == '\r')
	{
		return (1);
	}
	return (0);
}

int				ft_atoi(const char *str)
{
	int i;
	int is_negative;
	int count;

	i = 0;
	count = 0;
	is_negative = 1;
	while (ft_characters(str) == 1)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			is_negative = -1;
		str++;
	}
	while ((*str >= '0') && (*str <= '9'))
	{
		i = (i * 10) + (*str - '0');
		str++;
		count++;
		if (count > 18)
			return (is_negative == -1 ? 0 : -1);
	}
	return (i * is_negative);
}
