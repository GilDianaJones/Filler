/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coor_pce_1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 12:29:49 by gthomas           #+#    #+#             */
/*   Updated: 2017/01/31 13:46:38 by gthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/filler.h"

void		get_n_c_pce_1(t_filler *filler, int x, int y)
{
	int		i;
	int		j;

	i = y;
	j = x - 1;
	while (i >= 0)
	{
		while (j >= 0)
		{
			if (filler->pce[i][j] == '*')
			{
				filler->coor_pce_x = j;
				filler->coor_pce_y = i;
				return ;
			}
			--j;
		}
		j = filler->pce_x - 1;
		--i;
	}
	filler->coor_pce_x = -1;
	filler->coor_pce_y = -1;
}

void		get_n_c_pce_2(t_filler *filler, int x, int y)
{
	int		i;
	int		j;

	i = y;
	j = x - 1;
	while (i < filler->pce_y)
	{
		while (j >= 0)
		{
			if (filler->pce[i][j] == '*')
			{
				filler->coor_pce_x = j;
				filler->coor_pce_y = i;
				return ;
			}
			--j;
		}
		j = filler->pce_x - 1;
		++i;
	}
	filler->coor_pce_x = -1;
	filler->coor_pce_y = -1;
}

void		get_n_c_pce_3(t_filler *filler, int x, int y)
{
	int		i;
	int		j;

	i = y;
	j = x + 1;
	while (i >= 0)
	{
		while (j < filler->pce_x)
		{
			if (filler->pce[i][j] == '*')
			{
				filler->coor_pce_x = j;
				filler->coor_pce_y = i;
				return ;
			}
			++j;
		}
		j = 0;
		--i;
	}
	filler->coor_pce_x = -1;
	filler->coor_pce_y = -1;
}

void		get_n_c_pce_4(t_filler *filler, int x, int y)
{
	int		i;
	int		j;

	i = y;
	j = x + 1;
	while (i < filler->pce_y)
	{
		while (j < filler->pce_x)
		{
			if (filler->pce[i][j] == '*')
			{
				filler->coor_pce_x = j;
				filler->coor_pce_y = i;
				return ;
			}
			++j;
		}
		j = 0;
		++i;
	}
	filler->coor_pce_x = -1;
	filler->coor_pce_y = -1;
}
