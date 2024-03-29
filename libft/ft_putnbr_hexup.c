/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 13:18:00 by gthomas           #+#    #+#             */
/*   Updated: 2016/12/17 12:41:39 by gthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putnbr_hexup(uintmax_t n)
{
	uintmax_t	nbr;

	nbr = n;
	if (nbr < 10)
		ft_putchar(nbr + '0');
	else if (nbr < 16 && nbr > 9)
		ft_putchar(nbr - 10 + 'A');
	else
	{
		ft_putnbr_hexup(nbr / 16);
		if (nbr % 16 > 9)
			ft_putchar((nbr % 16) - 10 + 'A');
		else
			ft_putchar((nbr % 16) + '0');
	}
}
