/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 20:01:24 by fahd              #+#    #+#             */
/*   Updated: 2022/04/15 02:10:41 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_list *a)
{
	int	i;
	int	j;

	i = a->val;
	j = a->next->val;
	if (i > j)
		sa(a);
}

void	sort_three(t_list **a)
{
	t_list	*temp;
	int		one;
	int		two;
	int		three;

	temp = *a;
	one = temp->val;
	two = temp->next->val;
	three = temp->next->next->val;
	if (one > two && one < three && two < three)
		sa(*a);
	else if (one > two && one > three && two > three)
	{
		sa(*a);
		rra(a);
	}
	else if (one > two && one > three && two < three)
		ra(*a);
	else if (one < two && one < three && two > three)
	{
		sa(*a);
		ra(*a);
	}
	else if (one < two && one > three && two > three)
		rra(a);
}

void	four_helper(t_list **a)
{
	t_list	*tmp;
	int		fst;
	int		sec;
	int		thd;
	int		fth;

	tmp = *a;
	fst = tmp->val;
	sec = tmp->next->val;
	thd = tmp->next->next->val;
	fth = tmp->next->next->next->val;
	if (fst > sec && sec < thd && sec < fth)
		ra(*a);
	else if (thd < fst && thd < sec && thd < fth)
	{
		ra(*a);
		ra(*a);
	}
	else if (fth < fst && fth < sec && fth < thd)
		rra(a);
}

void	sort_four(t_list **a, t_list **b)
{
	four_helper(a);
	push_to_b(a, b);
	sort_three(a);
	push_to_a(a, b);
}

void	sort_five(t_list **a, t_list **b)
{
	five_helper(a);
	push_to_b(a, b);
	sort_four(a, b);
	push_to_a(a, b);
}
