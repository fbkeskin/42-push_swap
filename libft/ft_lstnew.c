/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatkeski <fatkeski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:15:31 by fatkeski          #+#    #+#             */
/*   Updated: 2024/03/20 15:30:15 by fatkeski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int content, int flag)
{
	t_list	*list_ptr;

	list_ptr = (t_list *)malloc(sizeof(t_list));
	(*list_ptr).content = content;
	(*list_ptr).flag = flag;
	(*list_ptr).next = 0;
	return (list_ptr);
}
