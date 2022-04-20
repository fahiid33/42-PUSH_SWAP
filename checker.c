/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 04:57:07 by fahd              #+#    #+#             */
/*   Updated: 2022/04/20 21:59:01 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_res(t_list *a)
{
	if (not_sorted(a))
		ft_putstr("KO\n");
	else
		ft_putstr("OK\n");
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	char	*str;

	b = malloc(sizeof(t_list));
	b->next = NULL;
	if (ac == 1)
		exit(0);
	if (ac == 2)
		a = fill_list_1arg(av);
	else
		a = fill_list(av, ac);
	if (check_dup(a))
		ft_exit();
	str = get_next_line(0);
	while (str)
	{
		ft_cmp(str, &a, &b);
		if (str)
			free (str);
		str = get_next_line(0);
	}
	ft_res(a);
}
