/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatkeski <fatkeski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:17:08 by fatkeski          #+#    #+#             */
/*   Updated: 2024/03/20 15:18:34 by fatkeski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	for_three_arguments(t_list **stack_a, int min_flag, int max_flag)
{
	if ((*stack_a)->flag == max_flag)
		rotate(stack_a, 'a');
	else if ((*stack_a)->next->flag == max_flag)
		reverse_rotate(stack_a, 'a');
	if (is_sorted(*stack_a, min_flag) != 1)
		swap(*stack_a, 'a');
}

void	for_four_arguments(t_list **stack_a, t_list **stack_b, int min_flag,
		int max_flag)
{
	if ((*stack_a)->next->flag == min_flag)
		swap(*stack_a, 'a');
	else if ((*stack_a)->next->next->flag == min_flag)
	{
		rotate(stack_a, 'a');
		rotate(stack_a, 'a');
	}
	else if ((*stack_a)->next->next->next->flag == min_flag)
		reverse_rotate(stack_a, 'a');
	push(stack_b, stack_a, 'b');
	for_three_arguments(stack_a, min_flag + 1, max_flag);
	push(stack_a, stack_b, 'a');
}

void	for_five_arguments(t_list **stack_a, t_list **stack_b)
{
	if ((*stack_a)->next->flag == 0)
		swap(*stack_a, 'a');
	else if ((*stack_a)->next->next->flag == 0)
	{
		rotate(stack_a, 'a');
		rotate(stack_a, 'a');
	}
	else if ((*stack_a)->next->next->next->flag == 0)
	{
		reverse_rotate(stack_a, 'a');
		reverse_rotate(stack_a, 'a');
	}
	else if ((*stack_a)->next->next->next->next->flag == 0)
		reverse_rotate(stack_a, 'a');
	push(stack_b, stack_a, 'b');
	for_four_arguments(stack_a, stack_b, 1, 4);
	push(stack_a, stack_b, 'a');
}
