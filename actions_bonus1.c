/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_bonus1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 02:09:59 by fstitou           #+#    #+#             */
/*   Updated: 2022/04/18 22:00:46 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb_b(t_list **b)
{
	t_list	*temp;

	temp = malloc(sizeof(t_list));
	if (temp == NULL)
		return ;
	if (*b == NULL || (*b)->next == NULL)
	{
		free(temp);
		return ;
	}	
	temp->val = get_last(b);
	temp->next = *b;
	*b = temp;
}

void	push_to_a_b(t_list **a, t_list **b)
{
	t_list	*tmpb;
	t_list	*tmp1;
	t_list	*tmp2;

	if (!(*b))
		return ;
	tmpb = *b;
	tmp1 = malloc(sizeof(t_list));
	tmp2 = tmpb;
	tmp1->val = tmpb->val;
	*b = tmpb->next;
	tmp1->next = *a;
	*a = tmp1;
	free(tmp2);
}

void	push_to_b_b(t_list **a, t_list **b)
{
	t_list	*tmpa;
	t_list	*tmp1;
	t_list	*tmp2;

	if (!(*a))
		return ;
	tmpa = *a;
	tmp1 = malloc(sizeof(t_list));
	tmp2 = tmpa;
	tmp1->val = tmpa->val;
	*a = tmpa->next;
	tmp1->next = *b;
	*b = tmp1;
	free(tmp2);
}

void	rr(t_list *a, t_list *b)
{
	ra_b(a);
	rb_b(b);
}

void	rrr(t_list **a, t_list **b)
{
	rra_b(a);
	rrb_b(b);
}
