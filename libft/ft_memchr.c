/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdaedric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 13:32:01 by bdaedric          #+#    #+#             */
/*   Updated: 2020/11/13 12:38:23 by bdaedric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *src, int c, size_t n)
{
	size_t	i;
	char	*src1;
	char	symbol;

	i = 0;
	src1 = (char *)src;
	symbol = (unsigned char)c;
	while (i < n)
	{
		if (src1[i] == symbol)
			return (&src1[i]);
		i++;
	}
	return (NULL);
}
