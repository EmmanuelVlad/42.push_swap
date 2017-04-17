/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 17:10:07 by evlad             #+#    #+#             */
/*   Updated: 2017/04/17 16:02:13 by evlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		push_swap(int ac, char **av)
{
	t_stack		*a;
	t_stack		*b;
	t_element	*tmp_a;
	t_element	*tmp_b;

	a = init_a(av[ac - 1]);
	b = init_b();
	stock(a, ac, av);
	ft_printf("{%d}", parse_max_min(a, 10));
	tmp_a = a->first;
	tmp_b = b->first;
	ft_printf("\nStack A:\n");
	while (tmp_a)
	{
		ft_printf("%d\n", tmp_a->value);
		tmp_a = tmp_a->next;
	}
	ft_printf("\nStack B:\n");
	while (tmp_b)
	{
		ft_printf("%d\n", tmp_b->value);
		tmp_b = tmp_b->next;
	}
	freestack(a);
	freestack(b);
	return (1);
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		if (!push_swap(ac, av))
			ft_printf("Error\n");
	}
	return (1);
}
