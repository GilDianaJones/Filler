/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_p1_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 12:51:50 by gthomas           #+#    #+#             */
/*   Updated: 2017/01/31 13:48:31 by gthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/filler.h"

void		algo_p1_dir_5(t_filler *filler)
{
	if (filler->dir == 5)
	{
		get_n_c_pce_5(filler, 0, filler->pce_y);
		get_n_c_p1_5(filler, filler->map_x - 1, -1);
		while (filler->coor_y >= 0)
		{
			if (filler->coor_pce_y >= 0 && !fit_in_map(filler))
				get_n_c_pce_5(filler, filler->coor_pce_x, filler->coor_pce_y);
			if (filler->coor_pce_y == -1)
			{
				get_n_c_pce_5(filler, 0, filler->pce_y);
				get_n_c_p1_5(filler, filler->coor_x, filler->coor_y);
			}
			if (fit_in_map(filler))
			{
				if (place_piece(filler))
					break ;
				get_n_c_pce_5(filler, filler->coor_pce_x, filler->coor_pce_y);
			}
		}
		filler->coor_pce_x_final = filler->coor_x - filler->coor_pce_x;
		filler->coor_pce_y_final = filler->coor_y - filler->coor_pce_y;
	}
}

void		algo_p1_dir_6(t_filler *filler)
{
	if (filler->dir == 6)
	{
		get_n_c_pce_6(filler, filler->pce_x - 1, filler->pce_y);
		get_n_c_p1_6(filler, 0, -1);
		while (filler->coor_y >= 0)
		{
			if (filler->coor_pce_y >= 0 && !fit_in_map(filler))
				get_n_c_pce_6(filler, filler->coor_pce_x, filler->coor_pce_y);
			if (filler->coor_pce_y == -1)
			{
				get_n_c_pce_6(filler, filler->pce_x - 1, filler->pce_y);
				get_n_c_p1_6(filler, filler->coor_x, filler->coor_y);
			}
			if (fit_in_map(filler))
			{
				if (place_piece(filler))
					break ;
				get_n_c_pce_6(filler, filler->coor_pce_x, filler->coor_pce_y);
			}
		}
		filler->coor_pce_x_final = filler->coor_x - filler->coor_pce_x;
		filler->coor_pce_y_final = filler->coor_y - filler->coor_pce_y;
	}
}

void		algo_p1_dir_7(t_filler *filler)
{
	if (filler->dir == 7)
	{
		get_n_c_pce_7(filler, 0, -1);
		get_n_c_p1_7(filler, filler->map_x - 1, filler->map_y);
		while (filler->coor_y >= 0)
		{
			if (filler->coor_pce_y >= 0 && !fit_in_map(filler))
				get_n_c_pce_7(filler, filler->coor_pce_x, filler->coor_pce_y);
			if (filler->coor_pce_y == -1)
			{
				get_n_c_pce_7(filler, 0, -1);
				get_n_c_p1_7(filler, filler->coor_x, filler->coor_y);
			}
			if (fit_in_map(filler))
			{
				if (place_piece(filler))
					break ;
				get_n_c_pce_7(filler, filler->coor_pce_x, filler->coor_pce_y);
			}
		}
		filler->coor_pce_x_final = filler->coor_x - filler->coor_pce_x;
		filler->coor_pce_y_final = filler->coor_y - filler->coor_pce_y;
	}
}

void		algo_p1_dir_8(t_filler *filler)
{
	if (filler->dir == 8)
	{
		get_n_c_pce_8(filler, filler->pce_x - 1, -1);
		get_n_c_p1_8(filler, 0, filler->map_y);
		while (filler->coor_y >= 0)
		{
			if (filler->coor_pce_y >= 0 && !fit_in_map(filler))
				get_n_c_pce_8(filler, filler->coor_pce_x, filler->coor_pce_y);
			if (filler->coor_pce_y == -1)
			{
				get_n_c_pce_8(filler, filler->pce_x - 1, -1);
				get_n_c_p1_8(filler, filler->coor_x, filler->coor_y);
			}
			if (fit_in_map(filler))
			{
				if (place_piece(filler))
					break ;
				get_n_c_pce_8(filler, filler->coor_pce_x, filler->coor_pce_y);
			}
		}
		filler->coor_pce_x_final = filler->coor_x - filler->coor_pce_x;
		filler->coor_pce_y_final = filler->coor_y - filler->coor_pce_y;
	}
}
