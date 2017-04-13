/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 14:47:35 by evlad             #+#    #+#             */
/*   Updated: 2017/04/13 20:04:41 by evlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_element			*init_element(int value)
{
	t_element	*element;

	if (!(element = (t_element*)malloc(sizeof(t_element))))
		exit(EXIT_FAILURE);
	element->value = value;
	element->next = NULL;
	return (element);
}

t_stack				*init_a(char *str)
{
	t_stack		*stack;
	t_element	*element;

	if (!(element = (t_element*)malloc(sizeof(t_element))))
		exit(EXIT_FAILURE);
	if (!(stack = (t_stack*)malloc(sizeof(t_stack))))
		exit(EXIT_FAILURE);
	freexit(stack, str, 1);
	element->value = ft_atoi(str);
	element->next = NULL;
	stack->first = element;
	return (stack);
}

t_stack				*init_b()
{
	t_stack		*stack;

	if (!(stack = (t_stack*)malloc(sizeof(t_stack))))
		exit(EXIT_FAILURE);
	stack->first = NULL;
	return (stack);
}
