/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdaedric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 14:28:28 by bdaedric          #+#    #+#             */
/*   Updated: 2020/11/12 16:05:25 by bdaedric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *tmp;

	if (!(*lst))
		*lst = new;
	tmp = *lst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	new->next = NULL;
}
