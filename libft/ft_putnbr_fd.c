/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdaedric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 14:10:51 by bdaedric          #+#    #+#             */
/*   Updated: 2020/11/08 18:12:37 by bdaedric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	number;
	char		s;

	number = n;
	if (number < 0)
	{
		write(fd, "-", 1);
		number = -number;
	}
	if (number > 9)
		ft_putnbr_fd(number / 10, fd);
	s = number % 10 + '0';
	write(fd, &s, 1);
}
