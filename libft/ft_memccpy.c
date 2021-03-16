/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdaedric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:42:39 by bdaedric          #+#    #+#             */
/*   Updated: 2020/11/13 12:36:28 by bdaedric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*src1;
	unsigned char	*dst1;
	unsigned char	symbol;

	i = 0;
	src1 = (unsigned char *)src;
	dst1 = (unsigned char *)dst;
	symbol = (char)c;
	while (i < n)
	{
		dst1[i] = src1[i];
		if (src1[i] == symbol)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
