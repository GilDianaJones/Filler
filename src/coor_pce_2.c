/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coor_pce_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 12:30:34 by gthomas           #+#    #+#             */
/*   Updated: 2017/01/31 13:46:46 by gthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/filler.h"

void		get_n_c_pce_5(t_filler *filler, int x, int y)
{
	int		i;
	int		j;

	i = y - 1;
	j = x;
	while (j < filler->pce_x)
	{
		while (i >= 0)
		{
			if (filler->pce[i][j] == '*')
			{
				filler->coor_pce_x = j;
				filler->coor_pce_y = i;
				return ;
			}
			--i;
		}
		i = filler->pce_y - 1;
		++j;
	}
	filler->coor_pce_x = -1;
	filler->coor_pce_y = -1;
}

void		get_n_c_pce_6(t_filler *filler, int x, int y)
{
	int		i;
	int		j;

	i = y - 1;
	j = x;
	while (j >= 0)
	{
		while (i >= 0)
		{
			if (filler->pce[i][j] == '*')
			{
				filler->coor_pce_x = j;
				filler->coor_pce_y = i;
				return ;
			}
			--i;
		}
		i = filler->pce_y - 1;
		--j;
	}
	filler->coor_pce_x = -1;
	filler->coor_pce_y = -1;
}

void		get_n_c_pce_7(t_filler *filler, int x, int y)
{
	int		i;
	int		j;

	i = y + 1;
	j = x;
	while (j < filler->pce_x)
	{
		while (i < filler->pce_y)
		{
			if (filler->pce[i][j] == '*')
			{
				filler->coor_pce_x = j;
				filler->coor_pce_y = i;
				return ;
			}
			++i;
		}
		i = 0;
		++j;
	}
	filler->coor_pce_x = -1;
	filler->coor_pce_y = -1;
}

void		get_n_c_pce_8(t_filler *filler, int x, int y)
{
	int		i;
	int		j;

	i = y + 1;
	j = x;
	while (j >= 0)
	{
		while (i < filler->pce_y)
		{
			if (filler->pce[i][j] == '*')
			{
				filler->coor_pce_x = j;
				filler->coor_pce_y = i;
				return ;
			}
			++i;
		}
		i = 0;
		--j;
	}
	filler->coor_pce_x = -1;
	filler->coor_pce_y = -1;
}
