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

//Fonction gestion des piles
t_list  *ft_switch(t_list *stack);
void    ft_ss(t_list *stacka, t_list *stackb);
t_list  *ft_sa(t_list *stacka);
t_list  *ft_sb(t_list *stackb);

//Fonction utiles
t_list	*ft_lstnew(void *content);
void	ft_lstclear(t_list **lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
char	**ft_split(char const *s, char c);

#endif


