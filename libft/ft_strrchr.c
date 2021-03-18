/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdaedric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 15:43:57 by bdaedric          #+#    #+#             */
/*   Updated: 2020/11/04 17:53:00 by bdaedric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(char *str, int symnum)
{
	char symbol;
	char *a;

	symbol = (char)symnum;
	a = 0;
	while (*str != '\0')
	{
		if (*str == symbol)
			a = str;
		str++;
	}
	if (*str == symbol)
		return (str);
	return (a);
}
