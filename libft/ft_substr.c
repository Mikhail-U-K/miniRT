/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdaedric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 16:09:01 by bdaedric          #+#    #+#             */
/*   Updated: 2020/11/13 12:58:54 by bdaedric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*buffer;
	unsigned int	i;

	i = 0;
	if (!s)
		return (0);
	buffer = (char *)malloc(sizeof(char) * len + 1);
	if ((int)start >= ft_strlen((char *)s))
	{
		ft_bzero(buffer, len);
		return (buffer);
	}
	if (!buffer)
		return (NULL);
	while (i < len && s != NULL)
	{
		buffer[i] = s[start + i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
