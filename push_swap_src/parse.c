/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 14:49:31 by evlad             #+#    #+#             */
/*   Updated: 2017/04/17 15:57:25 by evlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		parse_min(t_stack *stack)
{
	t_element	*tmp;
	int			min;

	tmp = stack->first;
	min = tmp->value;
	while (tmp)
	{
		if (min > tmp->value)
			min = tmp->value;
		tmp = tmp->next;
	}
	return (min);
}

int		parse_max(t_stack *stack)
{
	t_element	*tmp;
	int			max;

	tmp = stack->first;
	max = tmp->value;
	while (tmp)
	{
		if (max < tmp->value)
			max = tmp->value;
		tmp = tmp->next;
	}
	return (max);
}

int		parse_max_min(t_stack *stack, int percent)
{
	t_element	*tmp;
	int			min;
	int			max;
	int			max_min;
	int			i;

	tmp = stack->first;
	min = parse_min(stack);
	max = parse_max(stack);
	i = 1;
	while (i < percent)
	{
		max_min = max;
		while (tmp)
		{
			if (max_min > tmp->value && tmp->value > min)
				max_min = tmp->value;
			tmp = tmp->next;
		}
		tmp = stack->first;
		min = max_min;
		i++;
	}
	return (max_min);
}
