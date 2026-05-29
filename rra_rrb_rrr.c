/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonjale <rmonjale@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 20:43:35 by rmonjale          #+#    #+#             */
/*   Updated: 2026/05/28 20:43:36 by rmonjale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//fonction generique reverse rotate
void    ft_reverse_rotate(t_list **stack)
{
    t_list  *dernier;
    t_list  *avantdernier;

    if (!(*stack) || !(*stack)->next)
        return ;
    avantdernier = *stack;
    while (avantdernier->next->next != NULL)
        avantdernier = avantdernier->next;
    dernier = avantdernier->next;
    avantdernier->next = NULL;
    dernier->next = *stack;
    *stack = dernier;  
}

//rra reverse rotate stacka
void    ft_rra(t_list **stacka)
{
    ft_reverse_rotate(stacka);
    write(1, "rra\n", 4);
}

//rrb reverse rotate stackb
void    ft_rrb(t_list **stackb)
{
    ft_reverse_rotate(stackb);
    write(1, "rrb\n", 4);
}

//rrr reverse rotate stacka et stackb
void    ft_rrr(t_list **stacka, t_list **stackb)
{
    ft_reverse_rotate(stacka);
    ft_reverse_rotate(stackb);
    write(1, "rrr\n", 4);
}
