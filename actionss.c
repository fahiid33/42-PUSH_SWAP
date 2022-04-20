/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actionss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 22:50:52 by fahd              #+#    #+#             */
/*   Updated: 2022/04/17 21:56:47 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_list **b)
{
	t_list	*temp;

	temp = malloc(sizeof(t_list));
	temp->val = get_last(b);
	temp->next = *b;
	*b = temp;
	ft_putstr("rra\n");
}

void	push_to_a(t_list **a, t_list **b)
{
	t_list	*tmpb;
	t_list	*tmp1;
	t_list	*tmp2;

	if (*(b) == NULL)
		return ;
	tmpb = *b;
	tmp1 = malloc(sizeof(t_list));
	tmp2 = tmpb;
	tmp1->val = tmpb->val;
	*b = tmpb->next;
	tmp1->next = *a;
	*a = tmp1;
	free(tmp2);
	ft_putstr("pa\n");
}

void	push_to_b(t_list **a, t_list **b)
{
	t_list	*tmpa;
	t_list	*tmp1;
	t_list	*tmp2;

	if (*(a) == NULL)
		return ;
	tmpa = *a;
	tmp1 = malloc(sizeof(t_list));
	tmp2 = tmpa;
	tmp1->val = tmpa->val;
	*a = tmpa->next;
	tmp1->next = *b;
	*b = tmp1;
	free(tmp2);
	ft_putstr("pb\n");
}

void	five_helper(t_list **a)
{
	t_list	*tmp;
	int		two;
	int		three;
	int		four;
	int		five;

	tmp = *a;
	two = tmp->next->val;
	three = tmp->next->next->val;
	four = tmp->next->next->next->val;
	five = tmp->next->next->next->next->val;
	if (tmp->val > two && two < three && two < four && two < five)
		ra(*a);
	else if (three < tmp->val && three < two && three < four && three < five)
	{
		ra(*a);
		ra(*a);
	}
	else if (four < tmp->val && four < two && four < three && four < five)
	{
		rra(a);
		rra(a);
	}
	else if (five < tmp->val && five < two && five < three && five < four)
		rra(a);
}
