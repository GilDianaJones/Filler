/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 13:15:35 by gthomas           #+#    #+#             */
/*   Updated: 2017/01/31 13:42:43 by gthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/filler.h"

void		p1(t_filler *filler)
{
	if (filler->p_nb == 1)
	{
		change_dir_p1(filler);
		algo_p1_dir_1(filler);
		algo_p1_dir_2(filler);
		algo_p1_dir_3(filler);
		algo_p1_dir_4(filler);
		algo_p1_dir_5(filler);
		algo_p1_dir_6(filler);
		algo_p1_dir_7(filler);
		algo_p1_dir_8(filler);
	}
}

void		p2(t_filler *filler)
{
	if (filler->p_nb == 2)
	{
		change_dir_p2(filler);
		algo_p2_dir_1(filler);
		algo_p2_dir_2(filler);
		algo_p2_dir_3(filler);
		algo_p2_dir_4(filler);
		algo_p2_dir_5(filler);
		algo_p2_dir_6(filler);
		algo_p2_dir_7(filler);
		algo_p2_dir_8(filler);
	}
}

void		sequence(t_filler *filler)
{
	parse(filler);
	alloc_map(filler);
	get_map(filler);
	alloc_pce(filler);
	get_pce(filler);
}

int			main(void)
{
	t_filler filler;

	init_lst(&filler);
	sequence(&filler);
	get_first_coor_p(&filler);
	get_dir(&filler);
	get_first_dir(&filler);
	while (1)
	{
		p1(&filler);
		p2(&filler);
		if (filler.coor_y < 0)
		{
			write(1, "0 0\n", 4);
			erase_filler(&filler);
			return (0);
		}
		ft_putnbr(filler.coor_pce_y_final);
		ft_putchar(' ');
		ft_putnbr(filler.coor_pce_x_final);
		ft_putchar('\n');
		erase_filler(&filler);
		sequence(&filler);
	}
	return (0);
}
