/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arachda <arachda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 22:47:53 by arachda           #+#    #+#             */
/*   Updated: 2023/12/03 13:42:53 by arachda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	words(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] == c && str[i])
		i++;
	while (str[i] != c && str[i])
	{
		while (str[i] != c && str[i])
			i++;
		count++;
		while (str[i] == c && str[i])
			i++;
	}
	return (count);
}

char	*putstr(const char *p, char c)
{
	char	*s;
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (p[len] && p[len] != c)
		len++;
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	while (i < len)
	{
		s[i] = p[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

void	fr(int i, char **str)
{
	while (--i >= 0)
		free(str[i]);
	free(str);
}

char	**final(const char *s, char **str, int len, char c)
{
	int	i;

	i = 0;
	while (i < len)
	{
		while (*s == c)
			s++;
		if (*s)
			str[i] = putstr(s, c);
		if (!str[i])
		{
			fr(i, str);
			return (0);
		}
		while (*s && *s != c)
			s++;
		i++;
	}
	str[i] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		len;
	int		i;
	char	**str;

	if (!s)
		return (NULL);
	i = 0;
	len = words(s, c);
	str = malloc(sizeof(char *) * (len + 1));
	if (!str)
		return (NULL);
	str = final(s, str, len, c);
	return (str);
}
