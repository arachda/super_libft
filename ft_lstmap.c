/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arachda <arachda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:22:50 by arachda           #+#    #+#             */
/*   Updated: 2023/11/22 13:17:27 by arachda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*str;
	t_list	*h;

	h = NULL;
	if (!lst || !f)
		return (0);
	while (lst)
	{
		str = ft_lstnew(f(lst -> content));
		if (!str)
		{
			ft_lstclear(&h, del);
			return (NULL);
		}
		ft_lstadd_back(&h, str);
		lst = lst -> next;
	}
	return (h);
}
