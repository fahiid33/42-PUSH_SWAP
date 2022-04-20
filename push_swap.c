/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:58:32 by fahd              #+#    #+#             */
/*   Updated: 2022/04/20 21:59:09 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	if (ac > 1)
	{
		b = malloc(sizeof(t_list));
		b->next = NULL;
		a = fill_list(av, ac);
		a = bubblesort(a, ac);
		if (check_dup(a))
			ft_exit();
		if (not_sorted(a))
			a = push_swapinho(a, b, ac);
		exit(0);
	}
}
