/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatkeski <fatkeski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:14:19 by fatkeski          #+#    #+#             */
/*   Updated: 2024/03/20 15:19:22 by fatkeski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	put_error(void)
{
	write(2, "Error\n", 6);
	exit(0);
}

void	sort(int len, t_list **stack_a, t_list **stack_b)
{
	if (!(is_sorted(*stack_a, 0)))
	{
		if (len == 3)
			for_three_arguments(stack_a, 0, 2);
		else if (len == 4)
			for_four_arguments(stack_a, stack_b, 0, 3);
		else if (len == 5)
			for_five_arguments(stack_a, stack_b);
		else
			radix_sort(stack_a, stack_b);
	}
}

int	main(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (argc > 1)
	{
		create_stack(argc, argv, &stack_a);
		assign_flag(&stack_a);
		sort(ft_lstsize(stack_a), &stack_a, &stack_b);
	}
	return (0);
}
