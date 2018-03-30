/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 21:54:29 by gvilcean          #+#    #+#             */
/*   Updated: 2017/12/19 21:56:01 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	int		first_iter;
	t_list	*current_node;

	first_iter = 1;
	current_node = lst;
	while (current_node && (current_node != lst || first_iter))
	{
		first_iter = 0;
		f(current_node);
		current_node = current_node->next;
	}
}
