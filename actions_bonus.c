/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 02:08:00 by fstitou           #+#    #+#             */
/*   Updated: 2022/04/18 21:37:04 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa_b(t_list *a)
{
	if (a == NULL || a->next == NULL)
		return ;
	swap (&a->val, &a->next->val);
}

void	sb_b(t_list *b)
{
	if (b == NULL || b->next == NULL)
		return ;
	swap(&b->val, &b->next->val);
}

void	ra_b(t_list *a)
{
	t_list	*tmp;

	tmp = a;
	if (a == NULL || a->next == NULL)
		return ;
	while (tmp && tmp->next)
	{
		swap(&tmp->next->val, &tmp->val);
		tmp = tmp->next;
	}
}

void	rb_b(t_list *b)
{
	t_list	*tmp;

	tmp = b;
	if (b == NULL || b->next == NULL)
		return ;
	while (tmp && tmp->next)
	{
		swap(&tmp->next->val, &tmp->val);
		tmp = tmp->next;
	}
}

void	rra_b(t_list **a)
{
	t_list	*temp;

	temp = malloc(sizeof(t_list));
	if (temp == NULL)
		return ;
	if (*a == NULL || (*a)->next == NULL)
		return ;
	temp->val = get_last(a);
	temp->next = *a;
	*a = temp;
}
