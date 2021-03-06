/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 15:30:45 by gvilcean          #+#    #+#             */
/*   Updated: 2017/12/22 11:32:19 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	size_t	index;

	if (s == NULL)
		return ;
	index = 0;
	while (s[index] != '\0')
	{
		s[index] = '\0';
		index++;
	}
}
