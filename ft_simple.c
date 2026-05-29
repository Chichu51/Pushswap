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

void	ft_simple(t_list **stacka, int count)
{
	//t_list	*stackb;
	t_list	*parcourir;
	int	i;

	i = 0;
	parcourir = *stacka;
	//stackb = NULL;
	while (parcourir)
	{
		if (ft_minimini(*stacka) < (count/ 2))
		{
			while (i <= ft_minimini(*stacka) + 1)
			{
				ft_ra(stacka);
				i++;
			}
			//ft_pa(stacka);
		}
		parcourir = parcourir->next;
	}
}

int main(int argc, char **argv)
{
	int	*tabint;
	int	count;
    t_list  *stacka;
	int	i;

    i = 0;
	count = 0;
    if (argc < 2)
		EXIT;
	tabint = ft_check_arg(argc, argv, &count);
    stacka = ft_stack(tabint, count);
    printf("%d\n", ft_minimini(stacka));
	ft_simple(&stacka, count);
	while (i < count)
	{
		printf("%d ", *stacka->content);
		stacka = stacka->next;
		i++;
	}
	return (0);
}
