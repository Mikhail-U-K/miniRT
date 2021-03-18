/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdaedric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 17:58:15 by bdaedric          #+#    #+#             */
/*   Updated: 2020/11/09 20:42:32 by bdaedric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;

	j = 0;
	i = 0;
	if (!ft_strlen(needle))
		return ((char *)haystack);
	if (!len)
		return (NULL);
	while (i < len && haystack[i])
	{
		while (haystack[i + j] == needle[j] && needle[j] && (i + j) < len)
			j++;
		if (!needle[j])
			return ((char *)&haystack[i]);
		i++;
		j = 0;
	}
	return (0);
}
