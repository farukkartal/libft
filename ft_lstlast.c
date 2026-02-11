/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakartal <fakartal@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 21:13:56 by fakartal          #+#    #+#             */
/*   Updated: 2026/01/24 21:47:38 by fakartal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (!lst)
		return (NULL);
	temp = lst;
	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	while (i < len - 1)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}
