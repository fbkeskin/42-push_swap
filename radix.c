/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatkeski <fatkeski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:15:06 by fatkeski          #+#    #+#             */
/*   Updated: 2024/03/20 15:31:51 by fatkeski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assign_flag(t_list **stack)
{
	int		min;
	int		stack_len;
	int		flag_num;
	t_list	*temp;
	t_list	*min_node;

	flag_num = 0;
	stack_len = ft_lstsize(*stack);
	while (flag_num < stack_len)
	{
		temp = *stack;
		min = INT_MAX;
		while (temp != 0)
		{
			if (((temp->content) <= min) && (temp->flag == -1))
			{
				min = temp->content;
				min_node = temp;
			}
			temp = temp->next;
		}
		min_node->flag = flag_num;
		flag_num++;
	}
}

int	is_sorted(t_list *stack, int min_flag)
{
	while (stack != 0)
	{
		if (min_flag == stack->flag)
		{
			stack = stack->next;
			min_flag++;
		}
		else
			return (0);
	}
	return (1);
}

void	radix_sort(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	j;
	int	stack_a_len;

	i = 0;
	stack_a_len = ft_lstsize(*stack_a);
	while (i < stack_a_len && is_sorted(*stack_a, 0) == 0)
	{
		j = 0;
		while (j < stack_a_len)
		{
			if (((((*stack_a)->flag) >> i) & 1) == 0)
				push(stack_b, stack_a, 'b');
			else
				rotate(stack_a, 'a');
			j++;
		}
		while (*stack_b != 0)
			push(stack_a, stack_b, 'a');
		i++;
	}
}
