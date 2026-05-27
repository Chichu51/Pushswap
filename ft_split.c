/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonjale <rmonjale@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 19:21:04 by rmonjale          #+#    #+#             */
/*   Updated: 2026/05/01 17:38:38 by rmonjale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include "libft.h"
//#include <stdlib.h>
#include "push_swap.h"

static int	ft_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static int	ft_count_letter(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		count++;
		i++;
	}
	return (count);
}

static void	ft_remplissage(char **str, const char *s, char c)
{
	int	i;
	int	y;
	int	j;
	int	count;

	y = 0;
	i = 0;
	count = ft_count(s, c);
	while (s[i] && y < count)
	{
		j = 0;
		while (s[i] == c && s[i])
			i++;
		str[y] = malloc(sizeof(char) * (ft_count_letter(&s[i], c) + 1));
		if (str[y] == NULL)
			return ;
		while (s[i] != c && s[i])
		{
			str[y][j++] = s[i++];
		}
		str[y][j] = '\0';
		y++;
	}
	str[y] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (s == NULL)
		return (NULL);
	str = malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (str == NULL)
		return (NULL);
	ft_remplissage(str, s, c);
	return (str);
}

/*int	main(void)
{
	char	*s = "      cou cou   42  l a v    ie    ";
	char	c = ' ';
	char	**res;
	int	i;

	i = 0;
	res = ft_split(s, c);
	printf("%d\n", ft_count(s, c));
	printf("%d\n", ft_check_set('a', ' '));
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
	return (0);
}*/
