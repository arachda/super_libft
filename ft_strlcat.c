/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arachda <arachda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:18:39 by arachda           #+#    #+#             */
/*   Updated: 2023/12/02 15:36:57 by arachda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	d;
	size_t	s;

	s = ft_strlen(src);
	if (!dst && dstsize == 0)
		return (s);
	d = ft_strlen(dst);
	j = d;
	i = 0;
	if (dstsize <= d)
		return (dstsize + s);
	while (src[i] != '\0' && i < dstsize - d - 1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (d + s);
}
// #include <stdio.h>
// int main()
// {
// 	printf("%lu\n", ft_strlcat("aaaaa","ccccc",-1));
// 	printf("%lu\n", strlcat("aaaaa","ccccc",-1));

// }