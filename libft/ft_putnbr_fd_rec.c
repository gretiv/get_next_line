/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_rec.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 20:49:18 by gvilcean          #+#    #+#             */
/*   Updated: 2017/12/18 21:24:22 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd_rec(long long int number, int fd)
{
	char c;

	if (number)
	{
		ft_putnbr_fd_rec(number / 10, fd);
		c = '0' + number % 10;
		write(fd, &c, 1);
	}
}
