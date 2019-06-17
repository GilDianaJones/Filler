/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 09:28:53 by gthomas           #+#    #+#             */
/*   Updated: 2016/11/14 09:32:45 by gthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddend(t_list **lst, t_list *add)
{
	t_list *temp;

	temp = *(lst);
	while (temp != NULL)
		temp = temp->next;
	temp = add;
	temp->next = NULL;
}
