/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdaedric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 14:37:52 by bdaedric          #+#    #+#             */
/*   Updated: 2020/11/13 12:32:38 by bdaedric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(int num)
{
	int i;

	i = 0;
	if (num <= 0)
	{
		i++;
	}
	while (num != 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		sign;
	int		flag;

	sign = 0;
	flag = 1;
	i = count(n);
	if (n < 0)
	{
		sign = 1;
		flag = -1;
	}
	if ((s = (char *)malloc(sizeof(char) * i + 1)) == NULL)
		return (NULL);
	s[i] = '\0';
	while (--i >= sign)
	{
		s[i] = (n % 10) * flag + '0';
		n = n / 10;
	}
	if (sign == 1)
		s[i] = '-';
	return (s);
}
