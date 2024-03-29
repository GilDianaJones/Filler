/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 12:03:27 by gthomas           #+#    #+#             */
/*   Updated: 2016/11/12 14:25:33 by gthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *temp;
	t_list *temp2;

	temp = *alst;
	if (*alst)
	{
		while (temp)
		{
			temp2 = temp;
			del(temp->content, temp->content_size);
			free(temp);
			temp = temp2->next;
		}
	}
	*alst = NULL;
}
