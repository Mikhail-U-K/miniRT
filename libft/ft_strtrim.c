/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdaedric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 14:08:27 by bdaedric          #+#    #+#             */
/*   Updated: 2020/11/13 12:24:12 by bdaedric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*buff;
	unsigned int	i;
	size_t			len;

	i = 0;
	len = 0;
	buff = NULL;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	if (i == (unsigned int)ft_strlen(s1))
		return (ft_strdup(""));
	len = ft_strlen(s1);
	while (ft_strchr((char *)set, s1[len]) && len)
		len--;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	buff = ft_substr(s1, i, len - i + 1);
	return (buff);
}
