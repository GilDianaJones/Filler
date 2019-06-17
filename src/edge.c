/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   edge.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 12:27:47 by gthomas           #+#    #+#             */
/*   Updated: 2017/01/31 12:28:05 by gthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/filler.h"

int			edge_detec_y_p1(t_filler *filler, int y)
{
	if (ft_strichr(filler->map[y], 'O') != -1)
		return (1);
	return (0);
}

int			edge_detec_x_p1(t_filler *filler, int x)
{
	int		i;

	i = 0;
	while (i < filler->map_y)
	{
		if (filler->map[i][x] == 'O')
			return (1);
		++i;
	}
	return (0);
}

int			edge_detec_y_p2(t_filler *filler, int y)
{
	if (ft_strichr(filler->map[y], 'X') != -1)
		return (1);
	return (0);
}

int			edge_detec_x_p2(t_filler *filler, int x)
{
	int		i;

	i = 0;
	while (i < filler->map_y)
	{
		if (filler->map[i][x] == 'X')
			return (1);
		++i;
	}
	return (0);
}

void		edge_detection(t_filler *filler)
{
	filler->edge_x_min_p1 = edge_detec_x_p1(filler, 0);
	filler->edge_x_max_p1 = edge_detec_x_p1(filler, filler->map_x - 1);
	filler->edge_y_min_p1 = edge_detec_y_p1(filler, 0);
	filler->edge_y_max_p1 = edge_detec_y_p1(filler, filler->map_y - 1);
	filler->edge_x_min_p2 = edge_detec_x_p2(filler, 0);
	filler->edge_x_max_p2 = edge_detec_x_p2(filler, filler->map_x - 1);
	filler->edge_y_min_p2 = edge_detec_y_p2(filler, 0);
	filler->edge_y_max_p2 = edge_detec_y_p2(filler, filler->map_y - 1);
}
