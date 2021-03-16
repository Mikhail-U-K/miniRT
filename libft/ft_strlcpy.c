/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdaedric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 18:15:09 by bdaedric          #+#    #+#             */
/*   Updated: 2020/11/06 14:23:39 by bdaedric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t		ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	int		j;

	j = 0;
	i = 0;
	if (dest == NULL && src == NULL)
		return (0);
	while (src[j] != '\0')
		j++;
	if (dstsize == 0)
		return (j);
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}
