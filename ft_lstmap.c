/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakartal <fakartal@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 01:11:35 by fakartal          #+#    #+#             */
/*   Updated: 2026/01/25 01:38:43 by fakartal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	void	*p;
	t_list	*x;

	if (!f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		p = f(lst->content);
		x = ft_lstnew(p);
		if (!x)
		{
			del(p);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, x);
		lst = lst->next;
	}
	return (new);
}
