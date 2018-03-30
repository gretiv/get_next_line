/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 21:15:28 by gvilcean          #+#    #+#             */
/*   Updated: 2017/12/19 21:16:59 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*next_node;

	if (alst == NULL)
		return ;
	if ((*alst) == NULL)
		return ;
	next_node = (*alst)->next;
	ft_lstdelone(alst, del);
	ft_lstdel(&next_node, del);
}
