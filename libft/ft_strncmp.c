/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdaedric <bdaedric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 18:26:23 by bdaedric          #+#    #+#             */
/*   Updated: 2020/11/06 20:00:29 by bdaedric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && *ss1 != '\0' && *ss2 != '\0')
	{
		if (*ss1 != *ss2)
		{
			return (*ss1 - *ss2);
		}
		ss1++;
		ss2++;
		i++;
	}
	return (*ss1 - *ss2);
}
