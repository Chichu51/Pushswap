#include "push_swap.h"
#include <stdio.h>
//la fonction check args split les arguments avec espaces et les vérifie

//vérifie qu'il n'y a que des chiffres
int	ft_isdigit(char a)
{
	if ((a >= '0' && a <= '9'))
		return (1);
	return (0);
}

//analyse le char * suivant les digits
int	ft_check_digit(char *arg)
{
	int	i;

	i = 0;
	if (arg[0] == '-' || arg[0] == '+')
		i++;
	if (arg[0] == '0' && arg[i + 1])
		EXIT;
	if ((arg[0] == '+' || arg[0] == '-') && !(arg[1]))
		EXIT;
	while (arg[i])
	{
		if (ft_isdigit(arg[i]) == 0)
			EXIT;
		i++;
	}
	return (0);
}

//regarde si il y a des doublons
int	ft_isdoublon(int *arg, int count)
{
	int	i;
	int	y;

	i = 0;
	while (i < count)
	{
		y = i + 1;
		while (y < count)
		{
			if (arg[i] == arg[y])
				return (1);
			y++;
		}
		i++;
	}
	return (0);
}

//transforme en tableau de int
int	*ft_tabint(int *count, char **arguments)
{
	int	i;
	int	*tabint;

	i = 0;
	tabint = malloc(sizeof(int) * (*count));
	if (tabint == NULL)
		return (NULL);
	while (arguments[i])
	{
		tabint[i] = ft_atoi(arguments[i]);
		i++;
	}
	if (ft_isdoublon(tabint, *count) == 1)
	{
		free(tabint);
		EXIT;
	}
	return (tabint);
}

//Fonction principale qui retourne le nombre d'arguments pour préparer le tableau
int	*ft_check_arg(int argc, char **argv, int *count)
{
	int	i;
	char **arguments;
	int	*tabint;

	i = 0;
	*count = 0;
	if (argc == 2)
		arguments = ft_split(argv[1], ' ');
	else
		arguments = argv + 1;
	while (arguments[i])
	{
		ft_check_digit(arguments[i]);
		(*count)++;
		i++;
	}
	tabint = ft_tabint(count, arguments);
	return (tabint);
}

int	main(int argc, char **argv)
{
	int	*tabint;
	int	i;
	int	count;

	if (argc < 2)
		EXIT;
	i = 0;
	tabint = ft_check_arg(argc, argv, &count);
	while (i < count)
	{
		printf("%d\n", tabint[i]);
		i++;
	}
	return (0);
}
