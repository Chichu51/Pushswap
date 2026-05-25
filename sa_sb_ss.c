#include "push_swap.h"

// echange le premiere et deuxieme noeud de stacka 
t_list  *ft_sa(t_list *stacka)
{
    stacka = ft_switch(stacka);
    write(1, "sa\n", 3);
    return (stacka);
}

// echange le premiere et deuxieme noeud de stackb
t_list  *ft_sb(t_list *stackb)
{
    stackb = ft_switch(stackb);
    write(1, "sb\n", 3);
    return (stackb);
}

// echange le premiere et deuxieme noeud de stacka et stackb
void  ft_ss(t_list *stacka, t_list *stackb)
{
    stacka = ft_switch(stacka);
    stackb = ft_switch(stackb);
    write(1, "ss\n", 3);
}

// fonction generique pour echanger deux noeuds sans perdre le pointeur du debut
t_list    *ft_switch(t_list *stack)
{
    t_list  *temp1;
    t_list  *temp2;
    t_list  *first;

    if (!stack || !stack->next)
        return (stack);
    temp1 = stack;
    stack = stack->next;
    first = stack;
    temp2 = stack->next;
    stack->next = temp1;
    stack = stack->next;
    stack->next = temp2;
    return (first);
}

// #include <stdio.h>

// int main(void)
// {
//     t_list  *stacka;
//     t_list  *stackb;
//     int *tab;
//     int argc;
//     t_list  *cleana;
//     t_list  *cleanb;
//     t_list  *temp;

//     argc = 11;
//     tab = malloc(sizeof(int) * 10);
//     if (tab == NULL)
//         return (1);
//     tab[0] = 0;
//     tab[1] = 1;
//     tab[2] = 2;
//     tab[3] = 3;
//     tab[4] = 4;
//     tab[5] = 5;
//     tab[6] = 6;
//     tab[7] = 7;
//     tab[8] = 8;
//     tab[9] = 9;
//     stacka = ft_stack(tab, argc);
//     stackb = ft_stack(tab, argc);
//     stacka = ft_sa(stacka);
//     cleana = stacka;
//     stackb = ft_sb(stackb);
//     cleanb = stackb;
//     ft_ss(stacka, stackb);
//     while (stacka != NULL)
//     {
//         printf("%d\n", *stacka->content);
//         stacka = stacka->next;
//     }
//     while (stackb != NULL)
//     {
//         printf("%d\n", *stackb->content);
//         stackb = stackb->next;
//     }
//     while (cleana != NULL)
//     {
//         temp = cleana->next;
//         free(cleana);
//         cleana = temp;
//     }
//     while (cleanb != NULL)
//     {
//         temp = cleanb->next;
//         free(cleanb);
//         cleanb = temp;
//     }
//     free (tab);
//     return (0);
// }