/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdaedric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 15:38:13 by bdaedric          #+#    #+#             */
/*   Updated: 2020/11/11 16:39:03 by bdaedric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*tmp;

	if (!(tmp = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	tmp->content = content;
	tmp->next = NULL;
	return (tmp);
}
