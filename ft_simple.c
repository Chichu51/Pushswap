#include "push_swap.h"
#include <stdio.h>

int	ft_minimini(t_list *stacka)
{
	int	count;
	int	position;
	t_list	*minimum;

	count = 1;
	position = 0;
	minimum = stacka;
	stacka = stacka->next;
	while (stacka)
	{
		if (*minimum->content > *stacka->content)
		{
			minimum = stacka;
			position = count;
		}
		stacka = stacka->next;
		count++;
	}
	return (position);
}

void	ft_rotation(t_list **stacka, t_list **stackb, int count)
{
	int	i;
	int	position;

	i = 0;
	position = ft_minimini(*stacka);
	if (position == 0)
		ft_pa(stacka, stackb);
	else if (position < (count / 2))
	{
		while (i < position)
		{
			ft_ra(stacka);
			i++;
		}
		ft_pa(stacka, stackb);
	}
	else
	{
		while (i < (count - position))
		{
			ft_rra(stacka);
			i++;
		}
		ft_pa(stacka, stackb);
	}
}

void	ft_simple(t_list **stacka, int count)
{
	t_list	*stackb;

	stackb = NULL;
	ft_rotation(stacka, &stackb, count);
}

int main(int argc, char **argv)
{
	int	*tabint;
	int	count;
    t_list  *stacka;
	
	count = 0;
    if (argc < 2)
		EXIT;
	tabint = ft_check_arg(argc, argv, &count);
    stacka = ft_stack(tabint, count);
    printf("%d\n", ft_minimini(stacka));
	printf("count : %d\n", count);
	ft_simple(&stacka, count);
	printf("stacka : ");
	while (stacka)
	{
		printf("%d ", *stacka->content);
		stacka = stacka->next;
	}
	return (0);
}

//printf de la stackb a integrer dans simple
/*	printf("stackb : ");
	while (stackb)
	{
		printf("%d ", *stackb->content);
		stackb = stackb->next;
	}
	printf("\n");
*/

