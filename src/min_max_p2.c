/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max_p2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 12:19:28 by gthomas           #+#    #+#             */
/*   Updated: 2017/01/31 12:19:46 by gthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/filler.h"

void		get_max_coor_y_p2(t_filler *filler)
{
	int i;

	i = filler->map_y - 1;
	while (i >= 0)
	{
		if (ft_strichr(filler->map[i], 'X') != -1)
		{
			filler->max_coor_y_p2 = i;
			return ;
		}
		--i;
	}
}

void		get_min_coor_y_p2(t_filler *filler)
{
	int i;

	i = 0;
	while (i < filler->map_y)
	{
		if (ft_strichr(filler->map[i], 'X') != -1)
		{
			filler->min_coor_y_p2 = i;
			return ;
		}
		++i;
	}
}

void		get_max_coor_x_p2(t_filler *filler)
{
	int i;
	int j;

	i = filler->map_y - 1;
	j = filler->map_x - 1;
	while (j >= 0)
	{
		while (i >= 0)
		{
			if (filler->map[i][j] == 'X')
			{
				filler->max_coor_x_p2 = j;
				return ;
			}
			--i;
		}
		i = filler->map_y - 1;
		--j;
	}
}

void		get_min_coor_x_p2(t_filler *filler)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < filler->map_x)
	{
		while (i < filler->map_y)
		{
			if (filler->map[i][j] == 'X')
			{
				filler->min_coor_x_p2 = j;
				return ;
			}
			++i;
		}
		i = 0;
		++j;
	}
}
