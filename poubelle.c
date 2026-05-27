//regarde si il y a des doublons
int	ft_isdoublon(char *arg)
{
	int	i;
	int	y;

	i = 0;
	while (arg[i])
	{
		y = i + 1;
		while (arg[y])
		{
			if (arg[i] == arg[y])
				return (1);
			y++;
		}
		i++;
	}
	return (0);
}
