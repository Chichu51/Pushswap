#include "push_swap.h"

void	ft_pa(t_list **stacka, t_list **stackb)
{
	t_list	*stock;

	stock = *stacka;
	*stacka = (*stacka)->next;
	stock->next = (*stackb);
	(*stackb) = stock;
	write(1, "pa\n", 3);
}

void	ft_pb(t_list **stacka, t_list **stackb)
{
	t_list	*stock;

	stock = *stackb;
	*stackb = (*stackb)->next;
	stock->next = *stacka;
	(*stacka) = stock;
	write(1, "pb\n", 3);
}
