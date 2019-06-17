/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coor_p2_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 12:35:22 by gthomas           #+#    #+#             */
/*   Updated: 2017/01/31 13:46:27 by gthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/filler.h"

void		get_n_c_p2_8(t_filler *filler, int x, int y)
{
	int		i;
	int		j;

	i = y - 1;
	j = x;
	while (j < filler->map_x)
	{
		while (i >= 0)
		{
			if (filler->map[i][j] == 'X')
			{
				filler->coor_x = j;
				filler->coor_y = i;
				return ;
			}
			--i;
		}
		i = filler->map_y - 1;
		++j;
	}
	filler->coor_x = -1;
	filler->coor_y = -1;
}

void		get_n_c_p2_6(t_filler *filler, int x, int y)
{
	int		i;
	int		j;

	i = y + 1;
	j = x;
	while (j < filler->map_x)
	{
		while (i < filler->map_y)
		{
			if (filler->map[i][j] == 'X')
			{
				filler->coor_x = j;
				filler->coor_y = i;
				return ;
			}
			++i;
		}
		i = 0;
		++j;
	}
	filler->coor_x = -1;
	filler->coor_y = -1;
}

void		get_n_c_p2_7(t_filler *filler, int x, int y)
{
	int		i;
	int		j;

	i = y - 1;
	j = x;
	while (j >= 0)
	{
		while (i >= 0)
		{
			if (filler->map[i][j] == 'X')
			{
				filler->coor_x = j;
				filler->coor_y = i;
				return ;
			}
			--i;
		}
		i = filler->map_y - 1;
		--j;
	}
	filler->coor_x = -1;
	filler->coor_y = -1;
}

void		get_n_c_p2_5(t_filler *filler, int x, int y)
{
	int		i;
	int		j;

	i = y + 1;
	j = x;
	while (j >= 0)
	{
		while (i < filler->map_y)
		{
			if (filler->map[i][j] == 'X')
			{
				filler->coor_x = j;
				filler->coor_y = i;
				return ;
			}
			++i;
		}
		i = 0;
		--j;
	}
	filler->coor_x = -1;
	filler->coor_y = -1;
}
