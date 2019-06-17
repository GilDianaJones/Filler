/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 12:18:14 by gthomas           #+#    #+#             */
/*   Updated: 2017/01/31 13:17:49 by gthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/filler.h"

void		alloc_pce(t_filler *filler)
{
	int		i;

	i = 0;
	if (!(filler->pce = (char **)malloc((filler->pce_y + 1) * sizeof(char *))))
		return ;
	while (i < filler->pce_y)
	{
		if (!(filler->pce[i] = (char *)malloc((filler->pce_x + 1))))
			return ;
		ft_bzero(filler->pce[i], filler->pce_x + 1);
		++i;
	}
}

void		alloc_map(t_filler *filler)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!(filler->map = (char **)malloc((filler->map_y + 1) * sizeof(char *))))
		return ;
	while (i < filler->map_y)
	{
		if (!(filler->map[i] = (char *)malloc(filler->map_x + 1)))
			return ;
		ft_bzero(filler->map[i], filler->map_x + 1);
		++i;
	}
}

void		init_lst(t_filler *filler)
{
	filler->pce_y = 0;
	filler->pce_x = 0;
	filler->map_y = 0;
	filler->map_x = 0;
	filler->first_y_p1 = 0;
	filler->first_x_p1 = 0;
	filler->first_y_p2 = 0;
	filler->first_x_p2 = 0;
	filler->x = 0;
	filler->y = 0;
	filler->coor_y = 0;
	filler->coor_x = 0;
	filler->p_nb = 0;
	filler->coor_pce_x = 0;
	filler->coor_pce_y = 0;
	filler->coor_pce_x_final = 0;
	filler->coor_pce_y_final = 0;
	filler->edge_x_min_p1 = 0;
	filler->edge_x_max_p1 = 0;
	filler->edge_y_min_p1 = 0;
	filler->edge_y_max_p1 = 0;
	filler->edge_x_min_p2 = 0;
	filler->edge_x_max_p2 = 0;
	filler->edge_y_min_p2 = 0;
	filler->edge_y_max_p2 = 0;
}

void		erase_filler(t_filler *filler)
{
	int		i;

	i = 0;
	free(filler->cpy);
	while (i < filler->map_y)
		free(filler->map[i++]);
	free(filler->map);
	i = 0;
	while (i < filler->pce_y)
		free(filler->pce[i++]);
	free(filler->pce);
	filler->map_y = 0;
	filler->map_x = 0;
	filler->pce_y = 0;
	filler->pce_x = 0;
	filler->x = 0;
	filler->y = 0;
	filler->coor_pce_y = 0;
	filler->coor_pce_x = 0;
	filler->coor_y = 0;
	filler->coor_x = 0;
}
