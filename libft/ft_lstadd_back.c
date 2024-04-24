/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatkeski <fatkeski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:14:04 by fatkeski          #+#    #+#             */
/*   Updated: 2024/03/20 15:14:06 by fatkeski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (*lst == 0)
		*lst = new;
	else
	{
		node = *lst;
		while (node->next != 0)
			node = node->next;
		node->next = new;
	}
}
