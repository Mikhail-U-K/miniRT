/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdaedric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 12:59:47 by bdaedric          #+#    #+#             */
/*   Updated: 2020/11/13 12:50:55 by bdaedric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return ((char *)s2);
	if (!s2)
		return ((char *)s1);
	str = (char *)malloc((ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1));
	if (!str)
		return (NULL);
	while (i < ft_strlen((char *)s1))
		str[j++] = s1[i++];
	i = 0;
	while (i < ft_strlen((char *)s2))
		str[j++] = s2[i++];
	str[j] = '\0';
	return (str);
}
