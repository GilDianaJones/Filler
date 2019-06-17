/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 12:58:32 by gthomas           #+#    #+#             */
/*   Updated: 2017/01/31 13:17:19 by gthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/filler.h"

int			place_piece(t_filler *filler)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < filler->pce_y)
	{
		while (j < filler->pce_x)
		{
			if (i == filler->coor_pce_y && j == filler->coor_pce_x)
				;
			else if (filler->map[filler->coor_y - filler->coor_pce_y + i]
					[filler->coor_x - filler->coor_pce_x + j] != '.' &&
					filler->pce[i][j] == '*')
				return (0);
			++j;
		}
		j = 0;
		++i;
	}
	return (1);
}

void		get_first_coor_p(t_filler *filler)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < filler->map_y)
	{
		while (j < filler->map_x)
		{
			if (filler->map[i][j] == 'O')
			{
				filler->first_y_p1 = i;
				filler->first_x_p1 = j;
			}
			if (filler->map[i][j] == 'X')
			{
				filler->first_y_p2 = i;
				filler->first_x_p2 = j;
			}
			++j;
		}
		j = 0;
		++i;
	}
}

void		get_first_dir(t_filler *filler)
{
	if (filler->first_x_p2 < filler->first_x_p1 &&
			filler->first_y_p2 < filler->first_y_p1)
		filler->first_dir = 1;
	else if (filler->first_x_p2 < filler->first_x_p1 &&
			filler->first_y_p2 > filler->first_y_p1)
		filler->first_dir = 2;
	else if (filler->first_x_p2 > filler->first_x_p1 &&
			filler->first_y_p2 < filler->first_y_p1)
		filler->first_dir = 3;
	else if (filler->first_x_p2 > filler->first_x_p1 &&
			filler->first_y_p2 > filler->first_y_p1)
		filler->first_dir = 4;
}

void		get_dir(t_filler *filler)
{
	if (filler->first_x_p2 < filler->first_x_p1 &&
			filler->first_y_p2 < filler->first_y_p1)
		filler->dir = 1;
	else if (filler->first_x_p2 < filler->first_x_p1 &&
			filler->first_y_p2 > filler->first_y_p1)
		filler->dir = 2;
	else if (filler->first_x_p2 > filler->first_x_p1 &&
			filler->first_y_p2 < filler->first_y_p1)
		filler->dir = 3;
	else if (filler->first_x_p2 > filler->first_x_p1 &&
			filler->first_y_p2 > filler->first_y_p1)
		filler->dir = 4;
}

int			fit_in_map(t_filler *filler)
{
	if (filler->coor_x - filler->coor_pce_x < 0)
		return (0);
	if (filler->coor_x + filler->pce_x - 1 - filler->coor_pce_x >=
		filler->map_x)
		return (0);
	if (filler->coor_y - filler->coor_pce_y < 0)
		return (0);
	if (filler->coor_y + filler->pce_y - 1 - filler->coor_pce_y >=
		filler->map_y)
		return (0);
	return (1);
}
