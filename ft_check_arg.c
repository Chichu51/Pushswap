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

//Fonction principale
int	ft_check_arg(int argc, char **argv)
{
	int	i;
	int	count;
	char **arguments;

	i = 0;
	count = 0;
	if (argc == 2)
		arguments = ft_split(argv[1], ' ');
	else
		arguments = argv + 1;
	while (arguments[i])
	{
		ft_check_digit(arguments[i]);
		count++;
		i++;
	}
	return (count);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);

	printf("%d\n", ft_check_arg(argc, argv));
	return (0);
}
