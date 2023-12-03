/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arachda <arachda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 22:39:20 by arachda           #+#    #+#             */
/*   Updated: 2023/11/30 14:30:17 by arachda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	lent(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n >= 1)
	{
		i++;
		n /= 10;
	}
	return (i);
}

void	pos(int len, long nb, char *str)
{
	while (len > 0)
	{
		str[--len] = (nb % 10) + '0';
		nb /= 10;
	}
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*str;
	int		len;

	len = lent(n);
	nb = n;
	str = malloc (len + 1);
	if (!str)
		return (0);
	str[len] = 0;
	if (nb >= 0)
		pos(len, nb, str);
	else if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
		len--;
		while (len > 0)
		{
			str[len--] = (nb % 10) + '0';
			nb /= 10;
		}
	}
	return (str);
}
