/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ismax.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 20:44:40 by gvilcean          #+#    #+#             */
/*   Updated: 2017/12/21 22:22:04 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_ismax(int a, int b)
{
	if (a >= b)
	{
		return (a);
	}
	else
		return (b);
}
