/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdaedric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:15:08 by bdaedric          #+#    #+#             */
/*   Updated: 2020/11/13 12:46:57 by bdaedric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *src, int sym, size_t len)
{
	char	symbol;
	char	*src1;
	size_t	i;

	i = 0;
	symbol = (char)sym;
	src1 = (char *)src;
	while (i < len)
	{
		src1[i] = symbol;
		i++;
	}
	return (src);
}
