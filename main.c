#include <stdio.h>

int main (int argc, char **argv)
{
    int *tab;
    int disorder;
    t_list *stacka;
    t_list *stackb;
    

    if (ft_doublon(argv) == 0)
    return (0);
    if (ft_isvalid(argc, argv) == 0)
    return (0);
    tab = ft_putnbr_intab(argc, argv);
    stacka = ft_stack(tab, argc);//ok pour cette fonction
    disorder = ft_disorder(tab);
    if (0 <= disorder < 2)
        ft_simple(stacka, stackb);
    else if (2 <= disorder < 5)
        ft_medium(stacka, stackb);
    else if (5 <= disorder <= 10)
        ft_complex(stacka, stackb);
    free(tout);
}