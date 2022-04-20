/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 01:16:00 by fstitou           #+#    #+#             */
/*   Updated: 2022/04/20 21:55:52 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*radixinho(t_list *a, t_list *b, int argc)
{
	int		list_size;
	int		max_bits;
	int		j;
	int		k;

	max_bits = get_max_bits(argc);
	list_size = lst_size(a);
	j = 0;
	while (j < max_bits)
	{
		k = 0;
		while (k <= list_size)
		{
			if (!(a->val >> j & 1))
				push_to_b(&a, &b);
			else
				ra(a);
			k++;
		}
		while (!empty_list(b))
			push_to_a(&a, &b);
		j++;
	}
	return (a);
}

t_list	*push_swapinho(t_list *a, t_list *b, int ac)
{
	if (ac == 3)
		sort_two(a);
	else if (ac == 4)
		sort_three(&a);
	else if (ac == 5)
		sort_four(&a, &b);
	else if (ac == 6)
		sort_five(&a, &b);
	else
		a = radixinho(a, b, ac);
	return (a);
}

t_list	*fill_list(char **av, int ac)
{
	t_list	*head;
	t_list	*lst;
	int		copy;

	copy = 2;
	lst = malloc(sizeof(t_list));
	head = lst;
	lst->val = ft_atoi(av[1]);
	lst->next = NULL;
	ac--;
	while (copy <= ac)
	{
		lst->next = malloc(sizeof(t_list));
		lst->next->val = ft_atoi(av[copy]);
		lst->next->next = NULL;
		lst = lst->next;
		copy++;
	}
	return (head);
}

t_list	*fill_list_1arg(char **av)
{
	t_list	*head;
	t_list	*lst;
	int		copy;

	copy = 1;
	lst = malloc(sizeof(t_list));
	head = lst;
	av = ft_split(av[1], ' ');
	lst->val = ft_atoi(av[0]);
	lst->next = NULL;
	while (av[copy])
	{
		lst->next = malloc(sizeof(t_list));
		lst->next->val = ft_atoi(av[copy]);
		lst->next->next = NULL;
		lst = lst->next;
		copy++;
	}
	for (int i = 0; av[i]; i++)
		free(av[i]);
	free(av);
	return (head);
}

void	ft_cmp(char *str, t_list **a, t_list **b)
{
	if (!ft_strcmp(str, "sa\n"))
		sa_b(*a);
	else if (!ft_strcmp(str, "sb\n"))
		sb_b(*b);
	else if (!ft_strcmp(str, "ss\n"))
		ss(*a, *b);
	else if (!ft_strcmp(str, "pa\n"))
		push_to_a_b(a, b);
	else if (!ft_strcmp(str, "pb\n"))
		push_to_b_b(a, b);
	else if (!ft_strcmp(str, "ra\n"))
		ra_b(*a);
	else if (!ft_strcmp(str, "rb\n"))
		rb_b(*b);
	else if (!ft_strcmp(str, "rr\n"))
		rr(*a, *b);
	else if (!ft_strcmp(str, "rra\n"))
		rra_b(a);
	else if (!ft_strcmp(str, "rrb\n"))
		rrb_b(b);
	else if (!ft_strcmp(str, "rrr\n"))
		rrr(a, b);
	else
		ft_exit();
}
