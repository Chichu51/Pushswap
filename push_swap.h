/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonjale <rmonjale@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 20:43:51 by rmonjale          #+#    #+#             */
/*   Updated: 2026/05/28 20:43:52 by rmonjale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
    int *content;
    struct s_list   *next;
}   t_list;

//Alias exit
#define EXIT do { write(2, "Error\n", 6); exit(1); } while (0)

//Fonction principal
t_list  *ft_stack(int *tab, int argc);
int	*ft_check_arg(int argc, char **argv, int *count);

//Fonction gestion des piles
t_list  *ft_switch(t_list *stack);
void    ft_ss(t_list *stacka, t_list *stackb);
t_list  *ft_sa(t_list *stacka);
t_list  *ft_sb(t_list *stackb);
void  ft_ra(t_list **stacka);
void  ft_rb(t_list **stackb);
void  ft_rr(t_list **stacka, t_list **stackb);
void    ft_rra(t_list **stacka);
void    ft_rrb(t_list **stackb);
void    ft_rrr(t_list **stacka, t_list **stackb);
void	ft_pb(t_list **stacka, t_list **stackb);
void	ft_pa(t_list **stacka, t_list **stackb);

//Fonction utiles
t_list	*ft_lstnew(void *content);
void	ft_lstclear(t_list **lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
char	**ft_split(char const *s, char c);
int		ft_atoi(const char *str);

#endif


