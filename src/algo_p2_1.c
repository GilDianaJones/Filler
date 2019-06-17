/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_p2_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 12:53:30 by gthomas           #+#    #+#             */
/*   Updated: 2017/01/31 13:48:58 by gthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/filler.h"

void		algo_p2_dir_1(t_filler *filler)
{
	if (filler->dir == 1)
	{
		get_n_c_pce_4(filler, -1, 0);
		get_n_c_p2_1(filler, filler->map_x, filler->map_y - 1);
		while (filler->coor_y >= 0)
		{
			if (filler->coor_pce_y >= 0 && !fit_in_map(filler))
				get_n_c_pce_4(filler, filler->coor_pce_x, filler->coor_pce_y);
			if (filler->coor_pce_y == -1)
			{
				get_n_c_pce_4(filler, -1, 0);
				get_n_c_p2_1(filler, filler->coor_x, filler->coor_y);
			}
			if (fit_in_map(filler))
			{
				if (place_piece(filler))
					break ;
				get_n_c_pce_4(filler, filler->coor_pce_x, filler->coor_pce_y);
			}
		}
		filler->coor_pce_x_final = filler->coor_x - filler->coor_pce_x;
		filler->coor_pce_y_final = filler->coor_y - filler->coor_pce_y;
	}
}

void		algo_p2_dir_2(t_filler *filler)
{
	if (filler->dir == 2)
	{
		get_n_c_pce_3(filler, -1, filler->pce_y - 1);
		get_n_c_p2_2(filler, filler->map_x, 0);
		while (filler->coor_y >= 0)
		{
			if (filler->coor_pce_y >= 0 && !fit_in_map(filler))
				get_n_c_pce_3(filler, filler->coor_pce_x, filler->coor_pce_y);
			if (filler->coor_pce_y == -1)
			{
				get_n_c_pce_3(filler, -1, filler->pce_y - 1);
				get_n_c_p2_2(filler, filler->coor_x, filler->coor_y);
			}
			if (fit_in_map(filler))
			{
				if (place_piece(filler))
					break ;
				get_n_c_pce_3(filler, filler->coor_pce_x, filler->coor_pce_y);
			}
		}
		filler->coor_pce_x_final = filler->coor_x - filler->coor_pce_x;
		filler->coor_pce_y_final = filler->coor_y - filler->coor_pce_y;
	}
}

void		algo_p2_dir_3(t_filler *filler)
{
	if (filler->dir == 3)
	{
		get_n_c_pce_2(filler, filler->pce_x, 0);
		get_n_c_p2_3(filler, -1, filler->map_y - 1);
		while (filler->coor_y >= 0)
		{
			if (filler->coor_pce_y >= 0 && !fit_in_map(filler))
				get_n_c_pce_2(filler, filler->coor_pce_x, filler->coor_pce_y);
			if (filler->coor_pce_y == -1)
			{
				get_n_c_pce_2(filler, filler->pce_x, 0);
				get_n_c_p2_3(filler, filler->coor_x, filler->coor_y);
			}
			if (fit_in_map(filler))
			{
				if (place_piece(filler))
					break ;
				get_n_c_pce_2(filler, filler->coor_pce_x, filler->coor_pce_y);
			}
		}
		filler->coor_pce_x_final = filler->coor_x - filler->coor_pce_x;
		filler->coor_pce_y_final = filler->coor_y - filler->coor_pce_y;
	}
}

void		algo_p2_dir_4(t_filler *filler)
{
	if (filler->dir == 4)
	{
		get_n_c_pce_1(filler, filler->pce_x, filler->pce_y - 1);
		get_n_c_p2_4(filler, -1, 0);
		while (filler->coor_y >= 0)
		{
			if (!fit_in_map(filler))
				get_n_c_pce_1(filler, filler->coor_pce_x, filler->coor_pce_y);
			if (filler->coor_pce_y == -1)
			{
				get_n_c_pce_1(filler, filler->pce_x, filler->pce_y - 1);
				get_n_c_p2_4(filler, filler->coor_x, filler->coor_y);
			}
			if (fit_in_map(filler))
			{
				if (place_piece(filler))
					break ;
				get_n_c_pce_1(filler, filler->coor_pce_x, filler->coor_pce_y);
			}
		}
		filler->coor_pce_x_final = filler->coor_x - filler->coor_pce_x;
		filler->coor_pce_y_final = filler->coor_y - filler->coor_pce_y;
	}
}
