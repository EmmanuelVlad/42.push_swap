/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 14:47:35 by evlad             #+#    #+#             */
/*   Updated: 2017/04/13 17:09:16 by evlad            ###   ########.fr       */
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

t_stack				*init(char *str)
{
	t_stack		*stack;
	t_element	*element;

	if (!(element = (t_element*)malloc(sizeof(t_element))))
		exit(EXIT_FAILURE);
	if (!(stack = (t_stack*)malloc(sizeof(t_stack))))
		exit(EXIT_FAILURE);
	freexit(stack, str);
	element->value = ft_atoi(str);
	element->next = NULL;
	stack->first = element;
	return (stack);
}
