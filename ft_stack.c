#include "push_swap.h"

// Fonction permettant de mettre le tableau sous forme
//     de liste chainee.
// Attention le content est un pointeur vers le tableau.

t_list *ft_stack(int *tab, int argc)
{
    int i;
    t_list *stack;
    t_list  *current;

   // argc = argc - 1;
    i = 1;
    stack = ft_lstnew(&tab[0]);
    if (stack == NULL)
        exit (1);
    while (i < argc)
    {
        current = ft_lstnew(&tab[i]);
        if(current == NULL)
        {
            ft_lstclear(&stack);
            exit (1);
        }
        ft_lstadd_back(&stack, current);
        i++;
    }
    return(stack);
}

/*#include <stdio.h>

int main(void)
{
    int *tab;
    int argc;
    int i;
    t_list  *stack;
    t_list  *clean;
    t_list  *temp;

    argc = 11;
    tab = malloc(sizeof(int) * 10);
    if (tab == NULL)
        return (1);
    tab[0] = 0;
    tab[1] = 1;
    tab[2] = 2;
    tab[3] = 3;
    tab[4] = 4;
    tab[5] = 5;
    tab[6] = 6;
    tab[7] = 7;
    tab[8] = 8;
    tab[9] = 9;
    stack = ft_stack(tab, argc);
    i = 0;
    clean = stack;
    while (stack != NULL)
    {
        printf("%d : %d\n", i, *stack->content);
        stack = stack->next;
        i++;
    }
    while (clean != NULL)
    {
        temp = clean->next;
        free(clean);
        clean = temp;
    }
    free (tab);
    return (0);
}*/