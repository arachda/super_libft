/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arachda <arachda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:34:44 by arachda           #+#    #+#             */
/*   Updated: 2023/11/27 14:27:25 by arachda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*str;

	str = (char *) s;
	c = (char) c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (str[i] == c)
			return (str + i);
		i--;
	}
	if (str[i] == c)
		return (str);
	return (0);
}
