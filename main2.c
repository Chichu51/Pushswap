/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonjale <rmonjale@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 20:43:12 by rmonjale          #+#    #+#             */
/*   Updated: 2026/05/28 20:43:14 by rmonjale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	int	*tabint;
	int	i;
	int	count;
    t_list  *stacka;

    count = 0;
    if (argc < 2)
		EXIT;
	i = 0;
	tabint = ft_check_arg(argc, argv, &count);
    stacka = ft_stack(tabint, count);
    while (stacka != NULL)
    {
        printf("%d : %d\n", i, *stacka->content);
        stacka = stacka->next;
        i++;
    }
	return (0);
}

//boucle dimpression pour tester le tabint
/*	while (i < count)
	{
		printf("%d\n", tabint[i]);
		i++;
	}*/

//ca compile avec : cc -Wall -Werror -Wextra ft_check_arg.c ft_check_utils.c ft_stack.c main2.c fonctions_utiles.c

//boucle dimpression de la stack
 /*   while (stacka != NULL)
    {
        printf("%d : %d\n", i, *stacka->content);
        stacka = stacka->next;
        i++;
    }*/
