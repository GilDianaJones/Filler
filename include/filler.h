/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 13:36:10 by gthomas           #+#    #+#             */
/*   Updated: 2017/01/31 14:24:34 by gthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

# include "../libft/includes/libft.h"
# include "../libft/includes/get_next_line.h"

typedef struct		s_filler
{
	int				p_nb;
	char			*cpy;
	char			**map;
	char			**pce;
	int				pce_y;
	int				pce_x;
	int				map_x;
	int				map_y;
	int				first_x_p1;
	int				first_y_p1;
	int				first_x_p2;
	int				first_y_p2;
	int				first_dir;
	int				x;
	int				y;
	int				coor_x;
	int				coor_y;
	int				coor_pce_x;
	int				coor_pce_y;
	int				coor_pce_x_final;
	int				coor_pce_y_final;
	int				max_coor_x;
	int				max_coor_y;
	int				max_coor_y_p1;
	int				min_coor_y_p1;
	int				max_coor_x_p1;
	int				min_coor_x_p1;
	int				max_coor_y_p2;
	int				min_coor_y_p2;
	int				max_coor_x_p2;
	int				min_coor_x_p2;
	int				dir;
	int				edge_y_min_p1;
	int				edge_y_max_p1;
	int				edge_x_min_p1;
	int				edge_x_max_p1;
	int				edge_y_min_p2;
	int				edge_y_max_p2;
	int				edge_x_min_p2;
	int				edge_x_max_p2;
}					t_filler;

void				parsing(t_filler *filler);
void				parse(t_filler *filler);
void				get_map(t_filler *filler);
void				get_pce(t_filler *filler);
void				alloc_pce(t_filler *filler);
void				alloc_map(t_filler *filler);
void				init_lst(t_filler *filler);
void				erase_filler(t_filler *filler);
void				algo_p1_dir_1(t_filler *filler);
void				algo_p1_dir_2(t_filler *filler);
void				algo_p1_dir_3(t_filler *filler);
void				algo_p1_dir_4(t_filler *filler);
void				algo_p1_dir_5(t_filler *filler);
void				algo_p1_dir_6(t_filler *filler);
void				algo_p1_dir_7(t_filler *filler);
void				algo_p1_dir_8(t_filler *filler);
void				algo_p2_dir_1(t_filler *filler);
void				algo_p2_dir_2(t_filler *filler);
void				algo_p2_dir_3(t_filler *filler);
void				algo_p2_dir_4(t_filler *filler);
void				algo_p2_dir_5(t_filler *filler);
void				algo_p2_dir_6(t_filler *filler);
void				algo_p2_dir_7(t_filler *filler);
void				algo_p2_dir_8(t_filler *filler);
void				get_n_c_pce_1(t_filler *filler, int x, int y);
void				get_n_c_pce_2(t_filler *filler, int x, int y);
void				get_n_c_pce_3(t_filler *filler, int x, int y);
void				get_n_c_pce_4(t_filler *filler, int x, int y);
void				get_n_c_pce_5(t_filler *filler, int x, int y);
void				get_n_c_pce_6(t_filler *filler, int x, int y);
void				get_n_c_pce_7(t_filler *filler, int x, int y);
void				get_n_c_pce_8(t_filler *filler, int x, int y);
void				get_n_c_p1_1(t_filler *filler, int x, int y);
void				get_n_c_p1_2(t_filler *filler, int x, int y);
void				get_n_c_p1_3(t_filler *filler, int x, int y);
void				get_n_c_p1_4(t_filler *filler, int x, int y);
void				get_n_c_p1_5(t_filler *filler, int x, int y);
void				get_n_c_p1_6(t_filler *filler, int x, int y);
void				get_n_c_p1_7(t_filler *filler, int x, int y);
void				get_n_c_p1_8(t_filler *filler, int x, int y);
void				get_n_c_p2_1(t_filler *filler, int x, int y);
void				get_n_c_p2_2(t_filler *filler, int x, int y);
void				get_n_c_p2_3(t_filler *filler, int x, int y);
void				get_n_c_p2_4(t_filler *filler, int x, int y);
void				get_n_c_p2_5(t_filler *filler, int x, int y);
void				get_n_c_p2_6(t_filler *filler, int x, int y);
void				get_n_c_p2_7(t_filler *filler, int x, int y);
void				get_n_c_p2_8(t_filler *filler, int x, int y);
int					fit_in_map(t_filler *filler);
void				change_dir_p1(t_filler *filler);
void				change_dir_p2(t_filler *filler);
int					place_piece(t_filler *filler);
void				get_max_coor_y_p1(t_filler *filler);
void				get_min_coor_y_p1(t_filler *filler);
void				get_max_coor_x_p1(t_filler *filler);
void				get_min_coor_x_p1(t_filler *filler);
void				get_max_coor_y_p2(t_filler *filler);
void				get_min_coor_y_p2(t_filler *filler);
void				get_max_coor_x_p2(t_filler *filler);
void				get_min_coor_x_p2(t_filler *filler);
void				edge_detect_y_p1(t_filler *filler, int y);
void				edge_detect_x_p1(t_filler *filler, int y);
void				edge_detect_y_p2(t_filler *filler, int y);
void				edge_detect_x_p2(t_filler *filler, int y);
void				edge_detection(t_filler *filler);
void				get_min_max(t_filler *filler);
void				get_dir(t_filler *filler);
void				get_first_dir(t_filler *filler);
void				get_first_coor_p(t_filler *filler);

#endif
