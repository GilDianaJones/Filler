/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coor_p1_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 12:39:40 by gthomas           #+#    #+#             */
/*   Updated: 2017/01/31 13:45:57 by gthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/filler.h"

void		get_n_c_p1_1(t_filler *filler, int x, int y)
{
	int		i;
	int		j;

	i = y;
	j = x + 1;
	while (i < filler->map_y)
	{
		while (j < filler->map_x)
		{
			if (filler->p_nb == 1 && filler->map[i][j] == 'O')
			{
				filler->coor_x = j;
				filler->coor_y = i;
				return ;
			}
			++j;
		}
		j = 0;
		++i;
	}
	filler->coor_x = -1;
	filler->coor_y = -1;
}

void		get_n_c_p1_2(t_filler *filler, int x, int y)
{
	int		i;
	int		j;

	i = y;
	j = x + 1;
	while (i >= 0)
	{
		while (j < filler->map_x)
		{
			if (filler->p_nb == 1 && filler->map[i][j] == 'O')
			{
				filler->coor_x = j;
				filler->coor_y = i;
				return ;
			}
			++j;
		}
		j = 0;
		--i;
	}
	filler->coor_x = -1;
	filler->coor_y = -1;
}

void		get_n_c_p1_3(t_filler *filler, int x, int y)
{
	int		i;
	int		j;

	i = y;
	j = x - 1;
	while (i < filler->map_y)
	{
		while (j >= 0)
		{
			if (filler->p_nb == 1 && filler->map[i][j] == 'O')
			{
				filler->coor_x = j;
				filler->coor_y = i;
				return ;
			}
			--j;
		}
		j = filler->map_x - 1;
		++i;
	}
	filler->coor_x = -1;
	filler->coor_y = -1;
}

void		get_n_c_p1_4(t_filler *filler, int x, int y)
{
	int		i;
	int		j;

	i = y;
	j = x - 1;
	while (i >= 0)
	{
		while (j >= 0)
		{
			if (filler->p_nb == 1 && filler->map[i][j] == 'O')
			{
				filler->coor_x = j;
				filler->coor_y = i;
				return ;
			}
			--j;
		}
		j = filler->map_x - 1;
		--i;
	}
	filler->coor_x = -1;
	filler->coor_y = -1;
}
