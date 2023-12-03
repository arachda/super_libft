/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arachda <arachda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:39:17 by arachda           #+#    #+#             */
/*   Updated: 2023/12/03 13:44:24 by arachda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub;

	i = start;
	j = 0;
	if (!s)
		return (NULL);
	if (!len || (size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		sub = malloc(ft_strlen(s + start) + 1);
	else
		sub = malloc((len + 1));
	if (!sub) 
		return (NULL);
	while (s[i] && j < len)
	{
		sub[j++] = s[i++];
	}
	sub[j] = '\0';
	return (sub);
}
