/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printexit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 14:54:56 by evlad             #+#    #+#             */
/*   Updated: 2017/04/13 18:04:30 by evlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_if_exists(t_element *element, int value)
{
	while (element->next)
	{
		if (element->value == value)
			return (0);
		element = element->next;
	}
	return (1);
}

void	freestack(t_stack *stack)
{
	t_element *tmp;

	tmp = NULL;
	if (!stack)
		return ;
	while (stack->first)
	{
		tmp = stack->first;
		stack->first = stack->first->next;
		free(tmp);
	}
	free(stack);
}

void	freexit(t_stack *stack, char *str, int first)
{
	size_t	i;

	i = 0;
	if (str[0] == '-' && str[1])
		i++;
	while (str[i])
	{
		if (!ft_strchr("0123456789", str[i]))
		{
			freestack(stack);
			printexit("Error\n");
		}
		i++;
	}
	if ((ft_atoi(str) > 2147483647 || ft_atoi(str) < -2147483648) ||
			(!first && !check_if_exists(stack->first, ft_atoi(str))))
	{
		freestack(stack);
		printexit("Error\n");
	}
}

void	printexit(char *str)
{
	ft_printf("%s", str);
	exit(EXIT_FAILURE);
}
