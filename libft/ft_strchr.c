/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdaedric <bdaedric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 14:03:09 by bdaedric          #+#    #+#             */
/*   Updated: 2020/11/13 12:49:23 by bdaedric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int symnum)
{
	int	i;

	i = 0;
	while (str[i] != symnum && str[i] != '\0')
		i++;
	if (str[i] == symnum)
		return ((char *)&str[i]);
	else
		return (NULL);
}
