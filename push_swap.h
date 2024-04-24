/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatkeski <fatkeski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:22:26 by fatkeski          #+#    #+#             */
/*   Updated: 2024/03/20 15:34:28 by fatkeski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

void	swap(t_list *stack, char stack_name);
void	swap_stacks(t_list *stack_a, t_list *stack_b);
void	push(t_list **stack_dest, t_list **stack_src, char stack_dest_name);
void	rotate(t_list **stack, char stack_name);
void	rotate_stacks(t_list **stack_a, t_list **stack_b);
void	reverse_rotate(t_list **stack, char stack_name);
void	reverse_rotate_stacks(t_list **stack_a, t_list **stack_b);
int		is_sorted(t_list *stack, int min_flag);
void	for_three_arguments(t_list **stack_a, int min_flag, int max_flag);
void	for_four_arguments(t_list **stack_a, t_list **stack_b, int min_flag,
			int max_flag);
void	for_five_arguments(t_list **stack_a, t_list **stack_b);
void	radix_sort(t_list **stack_a, t_list **stack_b);
void	assign_flag(t_list **stack);
void	put_error(void);
void	create_stack(int argc, char **argv, t_list **stack_a);

#endif
