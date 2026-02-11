/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakartal <fakartal@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:04:36 by fakartal          #+#    #+#             */
/*   Updated: 2026/01/09 20:50:15 by fakartal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	const unsigned char	*string;
	size_t				i;
	size_t				total;
	char				*dest;

	string = (const unsigned char *)s;
	i = 0;
	while (string[i] != '\0')
	{
		i++;
	}
	total = i + 1;
	dest = (char *)malloc(total);
	if (dest == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (string[i] != '\0')
	{
		dest[i] = string[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
