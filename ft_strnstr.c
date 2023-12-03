/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arachda <arachda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:31:06 by arachda           #+#    #+#             */
/*   Updated: 2023/11/30 12:57:58 by arachda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*h;
	char	*n;

	h = (char *)haystack;
	n = (char *)needle;
	i = 0;
	j = 0;
	if (!len && !haystack)
		return (0);
	if (!*needle)
		return (h);
	while (i < len && h[i])
	{
		while (h[i + j] == n[j] && n[j] && i + j < len)
			j++;
		if (n[j] == '\0')
			return (h + i);
		j = 0;
		i++;
	}
	return (NULL);
}
