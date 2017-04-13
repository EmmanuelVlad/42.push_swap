/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 17:10:07 by evlad             #+#    #+#             */
/*   Updated: 2017/04/13 17:15:21 by evlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		push_swap(int ac, char **av)
{
	t_stack		*stack;
	t_element	*tmp;

	stack = init(av[1]);
	stock(stack, ac, av);
	tmp = stack->first;
	while (tmp->next)
	{
		ft_printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
	freestack(stack);
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
