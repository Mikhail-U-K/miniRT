/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdaedric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:00:51 by bdaedric          #+#    #+#             */
/*   Updated: 2020/11/13 12:29:17 by bdaedric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	if ((str = malloc(count * size)) == NULL)
		return (NULL);
	while (i < (count * size))
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
