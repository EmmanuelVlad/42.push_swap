/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 17:10:23 by evlad             #+#    #+#             */
/*   Updated: 2017/04/17 16:12:15 by evlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include "./operations.h"

/*
** --------------------------------------------------------------------------
**								  READ AND STOCK
** --------------------------------------------------------------------------
*/

void				stock(t_stack *stack, int ac, char **av);

/*
** --------------------------------------------------------------------------
**								  INITILIZATION
** --------------------------------------------------------------------------
*/

t_element			*init_element(int value);
t_stack				*init_a(char *str);
t_stack				*init_b(void);

/*
** --------------------------------------------------------------------------
**									   SORT
** --------------------------------------------------------------------------
*/

void				sort(t_stack *a, t_stack *b, int amount);
void				sort_3(t_stack *stack);
void				sort_30(t_stack *stack);
void				sort_plus(t_stack *stack);

/*
** --------------------------------------------------------------------------
**									  PARSE
** --------------------------------------------------------------------------
*/

int					parse_min(t_stack *stack);
int					parse_max(t_stack *stack);
int					parse_max_min(t_stack *stack, int percent);

/*
** --------------------------------------------------------------------------
**									   MISC
** --------------------------------------------------------------------------
*/

int					check_if_exists(t_element *element, int value);
void				printexit(char *str);
void				freexit(t_stack *stack, char *str, int first);
void				freestack(t_stack *stack);

#endif
