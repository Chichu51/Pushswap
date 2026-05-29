/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonjale <rmonjale@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 20:43:27 by rmonjale          #+#    #+#             */
/*   Updated: 2026/05/28 20:43:29 by rmonjale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//fonction generique de rotation normale
void    ft_rotate(t_list **stack)
{
    t_list  *save;
    t_list  *dernier;

    if (!(*stack) || !(*stack)->next)
        return ;
    save = *stack;
    *stack = (*stack)->next;
    dernier = *stack;
    while (dernier->next != NULL)
        dernier = dernier->next;
    dernier->next = save;
    save->next = NULL;
}

//le premier deviens le dernier sur stack a
void  ft_ra(t_list **stacka)
{
    ft_rotate(stacka);
    write(1, "ra\n", 3);
}

//le premier deviens le dernier sur stack b
void  ft_rb(t_list **stackb)
{
    ft_rotate(stackb);
    write(1, "rb\n", 3);
}

//rotation sur a et b en meme temps
void  ft_rr(t_list **stacka, t_list **stackb)
{
    ft_rotate(stacka);
    ft_rotate(stackb);
    write(1, "rr\n", 3);
}
