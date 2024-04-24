/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatkeski <fatkeski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:16:57 by fatkeski          #+#    #+#             */
/*   Updated: 2024/03/20 15:20:15 by fatkeski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*stack'in en üstteki 2 elemanını swapler*/
void	swap(t_list *stack, char stack_name)
{
	int	temp;
	int	temp_flag;

	if ((stack->next == 0) || stack == 0)
		return ;
	temp = stack->content;
	temp_flag = stack->flag;
	stack->content = stack->next->content;
	stack->flag = stack->next->flag;
	stack->next->content = temp;
	stack->next->flag = temp_flag;
	if (stack_name == 'a')
		write(1, "sa\n", 3);
	if (stack_name == 'b')
		write(1, "sb\n", 3);
}

/*2 stack'in en üstteki 2 elemanını swapler*/
void	swap_stacks(t_list *stack_a, t_list *stack_b)
{
	swap(stack_a, 'a');
	swap(stack_b, 'b');
}

/*src stack'in en üstteki elemanı dest'in en üstüne konur*/
void	push(t_list **stack_dest, t_list **stack_src, char stack_dest_name)
{
	t_list	*top_src;

	if (stack_src == 0 || *stack_src == 0)
		return ;
	top_src = *stack_src;
	*stack_src = (*stack_src)->next;
	ft_lstadd_front(stack_dest, top_src);
	if (stack_dest_name == 'a')
		write(1, "pa\n", 3);
	if (stack_dest_name == 'b')
		write(1, "pb\n", 3);
}
