/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 20:51:41 by gvilcean          #+#    #+#             */
/*   Updated: 2017/12/21 20:51:48 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int						ft_numlen(int value, int base)
{
	int len;

	len = (value == 0) ? 1 : 0;
	if (value < 0)
	{
		len = (base == 10) ? 2 : 1;
		value = value / base;
		value = -value;
	}
	while (value > 0)
	{
		value = value / base;
		len++;
	}
	return (len);
}
