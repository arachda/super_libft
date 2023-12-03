/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arachda <arachda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:13:02 by arachda           #+#    #+#             */
/*   Updated: 2023/11/30 16:38:28 by arachda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*string;

	if (!s1 || !s2)
		return (0);
	i = 0;
	string = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!string)
		return (0);
	ft_memcpy(string, s1, ft_strlen(s1));
	ft_memcpy(string + ft_strlen(s1), s2, ft_strlen(s2));
	string[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (string);
}
