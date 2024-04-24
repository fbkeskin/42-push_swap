/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatkeski <fatkeski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:16:54 by fatkeski          #+#    #+#             */
/*   Updated: 2024/03/20 15:19:17 by fatkeski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_split(char **tmp_arr, int j)
{
	int	k;

	k = 0;
	while (k < j)
	{
		free(tmp_arr[k]);
		k++;
	}
}

static void	is_full_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
			return ;
		i++;
	}
	put_error();
}

static void	numeric_check(char **str)
{
	int	i;
	int	j;

	i = 1;
	while (str[i] != 0)
	{
		j = 0;
		is_full_space(str[i]);
		while (str[i][j] != '\0')
		{
			if ((str[i][j] >= '0' && str[i][j] <= '9') || str[i][j] == ' '
				|| (str[i][j] == '-' && str[i][j + 1] >= '0' && str[i][j
					+ 1] <= '9'))
				j++;
			else
				put_error();
		}
		i++;
	}
}

static void	content_repeat(int content, t_list *list)
{
	while (list != 0)
	{
		if (list->content == content)
			put_error();
		list = list->next;
	}
}

void	create_stack(int argc, char **argv, t_list **stack_a)
{
	int		i;
	int		j;
	int		num;
	t_list	*node;
	char	**tmp_arr;

	i = 1;
	numeric_check(argv);
	while (i < argc)
	{
		tmp_arr = ft_split(argv[i], ' ');
		j = 0;
		while (tmp_arr[j] != 0)
		{
			num = ft_atoi(tmp_arr[j]);
			content_repeat(num, *stack_a);
			node = ft_lstnew(num, -1);
			ft_lstadd_back(stack_a, node);
			j++;
		}
		free_split(tmp_arr, j);
		i++;
		free(tmp_arr);
	}
}
