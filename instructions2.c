/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions2                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatkeski <fatkeski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:20:33 by fatkeski          #+#    #+#             */
/*   Updated: 2024/03/20 15:20:34 by fatkeski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*stack'in bütün elemanlarını bir yukarı kaydırır*/
void	rotate(t_list **stack, char stack_name)
{
	t_list	*top_stack;

	if ((stack == 0) || ((*stack)->next == 0))
		return ;
	top_stack = *stack;
	*stack = (*stack)->next;
	top_stack->next = 0;
	ft_lstadd_back(stack, top_stack);
	if (stack_name == 'a')
		write(1, "ra\n", 3);
	if (stack_name == 'b')
		write(1, "rb\n", 3);
}

/*2 stack'in bütün elemanlarını bir yukarı kaydırır*/
void	rotate_stacks(t_list **stack_a, t_list **stack_b)
{
	rotate(stack_a, 'a');
	rotate(stack_b, 'b');
}

/*stack'in bütün elemanlarını bir aşağı kaydırır*/
void	reverse_rotate(t_list **stack, char stack_name)
{
	t_list	*temp;

	if ((stack == 0) || ((*stack)->next == 0))
		return ;
	temp = *stack;
	while (temp->next->next != 0)
		temp = temp->next;
	ft_lstadd_front(stack, (temp->next));
	temp->next = 0;
	if (stack_name == 'a')
		write(1, "rra\n", 4);
	if (stack_name == 'b')
		write(1, "rrb\n", 4);
}

/*stack'lerin bütün elemanlarını bir aşağı kaydırır*/
void	reverse_rotate_stacks(t_list **stack_a, t_list **stack_b)
{
	reverse_rotate(stack_a, 'a');
	reverse_rotate(stack_b, 'b');
}
