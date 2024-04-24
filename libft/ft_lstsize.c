/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatkeski <fatkeski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:15:51 by fatkeski          #+#    #+#             */
/*   Updated: 2024/03/20 15:15:52 by fatkeski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	if (lst == 0)
		return (0);
	len++;
	while (lst->next != 0)
	{
		lst = lst->next;
		len++;
	}
	return (len);
}
