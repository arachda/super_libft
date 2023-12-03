/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arachda <arachda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 22:37:38 by arachda           #+#    #+#             */
/*   Updated: 2023/12/03 15:44:53 by arachda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*str;

	total = count * size;
	if (size != 0 && total / size != count)
		return (0);
	str = malloc(total);
	if (!str)
		return (NULL);
	if (str) 
		ft_memset(str, 0, total);
	return (str);
}
