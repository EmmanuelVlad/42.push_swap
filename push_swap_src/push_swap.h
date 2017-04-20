/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 17:10:23 by evlad             #+#    #+#             */
/*   Updated: 2017/04/20 15:55:43 by evlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include "./operations.h"

/*
** --------------------------------------------------------------------------
**								    STRUCTURES
** --------------------------------------------------------------------------
*/

typedef struct		s_malloc
{
	char			**av;
	int				ac;
}					t_malloc;

/*
** --------------------------------------------------------------------------
**								  READ AND STOCK
** --------------------------------------------------------------------------
*/

void				stock(t_stack *stack, int ac, char **av, t_malloc *malloc);

/*
** --------------------------------------------------------------------------
**								  INITILIZATION
** --------------------------------------------------------------------------
*/

t_element			*init_element(int value);
t_stack				*init_a(char *str, t_malloc *malloc);
t_stack				*init_b(void);
t_malloc			*init_malloc(void);

/*
** --------------------------------------------------------------------------
**									   SORT
** --------------------------------------------------------------------------
*/

void				sort(t_stack *a, t_stack *b, int amount);
void				sort_3(t_stack *stack);
void				sort_30(t_stack *a, t_stack *b);
void				sort_plus(t_stack *a, t_stack *b);
void				put_first(t_stack *stack, int value);

/*
** --------------------------------------------------------------------------
**									  PARSE
** --------------------------------------------------------------------------
*/

int					parse_min(t_stack *stack);
int					parse_max(t_stack *stack);
int					parse_max_min(t_stack *stack, int percent);
int					parse_pos(t_stack *stack, int num);
int					stack_size(t_stack *stack);

/*
** --------------------------------------------------------------------------
**									   MISC
** --------------------------------------------------------------------------
*/

int					check_if_exists(t_element *element, int value);
void				printexit(char *str);
void				freexit(t_stack *stack, char *str, int first,
						t_malloc *malloc);
void				freestack(t_stack *stack);
void				free_malloc(t_malloc *malloc);
int					check_stack(t_stack *stack);

#endif
