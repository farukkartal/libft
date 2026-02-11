/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakartal <fakartal@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 12:57:35 by fakartal          #+#    #+#             */
/*   Updated: 2026/02/10 13:05:16 by fakartal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*ptr;
	size_t	i;

	if (count != 0 && size > (size_t)-1 / count)
		return (NULL);
	total = count * size;
	ptr = malloc(total);
	i = 0;
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < total)
	{
		((unsigned char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
