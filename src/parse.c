/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 13:15:35 by gthomas           #+#    #+#             */
/*   Updated: 2017/01/31 12:18:21 by gthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/filler.h"

void		cpy_pce(t_filler *filler, int i, char *buf)
{
	int n;
	int j;

	j = 0;
	n = i;
	while (i - n < filler->pce_y * filler->pce_x)
	{
		get_next_line(0, &buf);
		ft_realloc(&(filler->cpy), ft_strlen(buf));
		while (j < (int)ft_strlen(buf))
		{
			filler->cpy[i] = buf[j];
			++j;
			++i;
		}
		free(buf);
		j = 0;
	}
	filler->cpy[i] = '\0';
}

void		parse(t_filler *filler)
{
	char	*buf;
	int		j;
	int		n;
	int		i;

	i = 0;
	j = 0;
	n = 0;
	if (!(filler->cpy = malloc(sizeof(char))))
		return ;
	filler->cpy[0] = '\0';
	while (n == 0 && get_next_line(0, &buf))
	{
		ft_realloc(&(filler->cpy), ft_strlen(buf) + 1);
		while (j < (int)ft_strlen(buf))
			filler->cpy[i++] = buf[j++];
		j = 0;
		if (ft_stristr(buf, "Piece") >= 0)
			n = 1;
		free(buf);
	}
	parsing(filler);
	cpy_pce(filler, i, buf);
}

void		get_map(t_filler *filler)
{
	int i;
	int j;
	int k;

	j = 0;
	k = 0;
	i = ft_stristr(filler->cpy, "000");
	while (filler->cpy[i] && k < filler->map_y)
	{
		while (filler->cpy[i] != '.' && filler->cpy[i] != 'O'
				&& filler->cpy[i] != 'X')
			++i;
		while (filler->cpy[i] && (filler->cpy[i] == '.' ||
				filler->cpy[i] == 'O' || filler->cpy[i] == 'X') &&
				j < filler->map_x)
		{
			filler->map[k][j] = filler->cpy[i];
			++j;
			++i;
		}
		j = 0;
		++k;
	}
}

void		get_pce(t_filler *filler)
{
	int i;
	int j;
	int k;

	j = 0;
	k = 0;
	i = ft_stristr(filler->cpy, "Piece");
	i += ft_stristr(filler->cpy + i, ":") + 1;
	while (filler->cpy[i] && k < filler->pce_y)
	{
		while (j < filler->pce_x && (filler->cpy[i] == '.' ||
				filler->cpy[i] == '*'))
		{
			filler->pce[k][j] = filler->cpy[i];
			++i;
			++j;
		}
		ft_putendl_fd(filler->pce[k], 3);
		j = 0;
		++k;
	}
}

void		parsing(t_filler *filler)
{
	char	*cpy;
	int		m_y;
	int		p_y;

	cpy = filler->cpy;
	if (!filler->p_nb)
		filler->p_nb = ft_atoi(cpy + ft_stristr(cpy, "exec") + 6);
	filler->map_y = ft_atoi(cpy + ft_stristr(cpy, "Plateau") + 8);
	m_y = ft_intlen(filler->map_y);
	filler->map_x = ft_atoi(cpy + ft_stristr(cpy, "Plateau") + 9 + m_y);
	filler->pce_y = ft_atoi(cpy + ft_stristr(cpy, "Piece") + 6);
	p_y = ft_intlen(filler->pce_y);
	filler->pce_x = ft_atoi(cpy + ft_stristr(cpy, "Piece") + 7 + p_y);
}
