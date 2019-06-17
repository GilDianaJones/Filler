/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_p2_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 12:55:10 by gthomas           #+#    #+#             */
/*   Updated: 2017/01/31 14:04:07 by gthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/filler.h"

void		first_dir_1_p2_1(t_filler *filler)
{
	if (filler->first_dir == 1 && filler->dir == 1 && filler->min_coor_y_p1 <
			filler->max_coor_y_p2 && filler->max_coor_x_p2 <
			filler->min_coor_x_p1)
		filler->dir = 3;
	else if (filler->first_dir == 1 && filler->dir == 1 && filler->min_coor_y_p1
			< filler->max_coor_y_p2 && filler->max_coor_x_p2 <=
			filler->min_coor_x_p1)
		filler->dir = 5;
	else if (filler->first_dir == 1 && filler->dir == 3 &&
			(filler->edge_x_min_p2 || filler->edge_y_max_p2))
		filler->dir = 5;
	else if (filler->first_dir == 1 && filler->dir == 5 && filler->max_coor_y_p1
			> filler->first_y_p2)
		filler->dir = 4;
}

void		first_dir_1_p2_2(t_filler *filler)
{
	if (filler->first_dir == 1 && filler->dir == 5 &&
			((filler->edge_x_min_p1 && (!filler->edge_x_min_p2 ||
			!filler->edge_y_min_p2))))
		filler->dir = 1;
	else if (filler->first_dir == 1 && filler->dir == 1 &&
			(filler->edge_y_max_p2 || filler->edge_x_max_p2))
		filler->dir = 4;
	else if (filler->first_dir == 1 && filler->dir == 5 &&
			(filler->edge_x_max_p2 || filler->edge_y_min_p2))
		filler->dir = 7;
	else if (filler->first_dir == 1 && filler->dir == 4 &&
			(filler->edge_x_min_p2 || filler->edge_y_min_p2))
		filler->dir = 7;
}

void		first_dir_4_p2_1(t_filler *filler)
{
	if (filler->first_dir == 4 && filler->dir == 4 && filler->max_coor_y_p1 >=
			filler->min_coor_y_p2 && filler->max_coor_x_p1 >=
			filler->min_coor_x_p2)
		filler->dir = 5;
	else if (filler->first_dir == 4 && filler->dir == 4 && filler->max_coor_y_p1
			>= filler->min_coor_y_p2 && filler->max_coor_x_p1 <
			filler->min_coor_x_p2)
		filler->dir = 8;
	else if (filler->first_dir == 4 && filler->dir == 5 &&
			(filler->edge_x_max_p2 || filler->edge_y_min_p2))
		filler->dir = 6;
	else if (filler->first_dir == 4 && filler->dir == 5 && filler->edge_x_max_p2
			&& (!filler->edge_x_min_p1 || !filler->edge_y_max_p1))
		filler->dir = 1;
	else if (filler->first_dir == 4 & filler->dir == 8 && filler->max_coor_y_p1
			> filler->first_y_p2)
		filler->dir = 2;
	else if (filler->first_dir == 4 && filler->dir == 2 &&
			filler->edge_x_min_p2)
		filler->dir = 3;
}

void		first_dir_4_p2_2(t_filler *filler)
{
	if (filler->first_dir == 4 && filler->dir == 6 && filler->min_coor_x_p2
			== filler->min_coor_x_p1)
		filler->dir = 1;
	else if (filler->first_dir == 4 && filler->dir == 8 &&
			(filler->edge_x_max_p1 && (!filler->edge_x_max_p2 &&
			!filler->edge_y_max_p2)))
		filler->dir = 4;
	else if (filler->first_dir == 4 && filler->dir == 8 &&
			(filler->edge_x_min_p2 || filler->edge_y_max_p2))
		filler->dir = 5;
	else if (filler->first_dir == 4 && filler->dir == 3 && filler->max_coor_x_p1
			> filler->max_coor_x_p2)
		filler->dir = 5;
	else if (filler->first_dir == 4 && filler->dir == 1 &&
			(filler->edge_x_max_p2 || filler->edge_y_min_p2))
		filler->dir = 8;
}

void		change_dir_p2(t_filler *filler)
{
	edge_detection(filler);
	get_min_max(filler);
	first_dir_1_p2_1(filler);
	first_dir_1_p2_2(filler);
	first_dir_4_p2_1(filler);
	first_dir_4_p2_2(filler);
}
