/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdaedric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 12:34:01 by bdaedric          #+#    #+#             */
/*   Updated: 2020/11/12 17:57:09 by bdaedric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*buff;
	size_t		i;

	i = 0;
	if (!s)
		return (NULL);
	buff = malloc(ft_strlen(s) + 1);
	if (!buff)
		return (NULL);
	while (s[i])
	{
		buff[i] = f(i, s[i]);
		i++;
	}
	buff[i] = '\0';
	return (buff);
}
