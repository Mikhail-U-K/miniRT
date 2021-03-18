/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdaedric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 13:04:24 by bdaedric          #+#    #+#             */
/*   Updated: 2020/11/13 12:44:08 by bdaedric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*src1;
	unsigned char	*dst1;

	src1 = (unsigned char *)src;
	dst1 = (unsigned char *)dst;
	i = 0;
	if (src1 == NULL && dst1 == NULL)
		return (NULL);
	if (src > dst)
		while (i < len)
		{
			dst1[i] = src1[i];
			i++;
		}
	else
		while (len != 0)
		{
			dst1[len - 1] = src1[len - 1];
			len--;
		}
	return (dst);
}
