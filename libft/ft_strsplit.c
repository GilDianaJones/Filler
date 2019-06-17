/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 12:54:46 by gthomas           #+#    #+#             */
/*   Updated: 2016/12/22 11:32:40 by gthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_str_c_before(char const *s, char c)
{
	int		i;

	i = 0;
	if (s[0] == c)
	{
		while (s[i] == c)
			i++;
	}
	return (i);
}

static int	ft_c_count_before(char const *s, char c, int *tab, int j)
{
	int		i;
	int		count;
	int		nb;

	i = 0;
	count = 0;
	nb = 0;
	i = ft_str_c_before(s, c);
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i + 1] != '\0')
			i++;
		if (nb > 0)
		{
			tab[j] = nb;
			nb = 0;
			count++;
			j++;
		}
		if (s[i] != c)
			nb++;
		i++;
	}
	tab[j] = nb;
	return (count);
}

static char	**ft_str_fill(char **new, char const *s, char c, int i)
{
	int		j;
	int		k;

	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i] != '\0')
		{
			new[k][j] = '\0';
			while (s[i] == c)
				i++;
			k++;
			j = 0;
		}
		while (s[i] != c && s[i] != '\0')
		{
			new[k][j++] = s[i];
			i++;
		}
	}
	if (s[i - 1] != c)
		k++;
	new[k] = NULL;
	return (new);
}

static char	**ft_str_alloc_empty(int i)
{
	char	**new;

	if (!(new = (char **)malloc((i + 2) * sizeof(char *))))
		return (NULL);
	if (!(new[0] = (char *)malloc(sizeof(char))))
		return (NULL);
	new[0] = NULL;
	if (!(new[1] = (char *)malloc(sizeof(char))))
		return (NULL);
	new[1] = NULL;
	return (new);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**new;
	int		i;
	int		count;
	int		*tab;

	i = -1;
	if (s)
	{
		if (ft_strlen(s) == 0)
			return (ft_str_alloc_empty(ft_strlen(s)));
		if (!(tab = (int *)malloc(ft_strlen(s) * sizeof(int))))
			return (NULL);
		count = ft_c_count_before(s, c, tab, 0);
		if (!(new = (char **)malloc((count + 2) * sizeof(char *))))
			return (NULL);
		while (++i <= count)
		{
			if (!(new[i] = (char *)malloc(tab[i] * sizeof(char))))
				return (NULL);
		}
		if (!(new[i] = (char *)malloc(sizeof(char))))
			return (NULL);
		return (ft_str_fill(new, s, c, ft_str_c_before(s, c)));
	}
	return (NULL);
}
