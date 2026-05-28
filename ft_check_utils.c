/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonjale <rmonjale@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 20:42:29 by rmonjale          #+#    #+#             */
/*   Updated: 2026/05/28 20:42:31 by rmonjale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	i;
	int	res;

	sign = 1;
	i = 0;
	res = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (sign * res);
}

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

