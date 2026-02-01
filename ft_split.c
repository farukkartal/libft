/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakartal <fakartal@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 19:25:04 by fakartal          #+#    #+#             */
/*   Updated: 2026/01/31 19:25:36 by fakartal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	*ft_wordalloc(char const *s, char c, int *i)
{
	char	*word;
	int		len;
	int		j;

	len = 0;
	while (s[*i + len] && s[*i + len] != c)
		len++;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	j = 0;
	while (j < len)
		word[j++] = s[(*i)++];
	word[j] = '\0';
	return (word);
}

static void	ft_freeall(char **arrays, int j)
{
	int	k;

	k = 0;
	if (!arrays)
		return ;
	while (k < j)
	{
		free(arrays[k]);
		k++;
	}
	free(arrays);
}

static char	**ft_getwords(char const *s, char c, int word_count)
{
	char	**arrays;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	arrays = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!arrays)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			arrays[j] = ft_wordalloc(s, c, &i);
			if (!arrays[j])
				return (ft_freeall(arrays, j - 1), NULL);
			j++;
		}
		else
			i++;
	}
	arrays[j] = NULL;
	return (arrays);
}

char	**ft_split(char const *s, char c)
{
	char	**arrays;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = ft_wordcount(s, c);
	if (word_count == 0)
		return (NULL);
	arrays = ft_getwords(s, c, word_count);
	if (!arrays)
		return (NULL);
	return (arrays);
}
