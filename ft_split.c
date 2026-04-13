/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilyas <bilyas@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 01:35:13 by bilyas            #+#    #+#             */
/*   Updated: 2025/10/31 01:35:13 by bilyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_counter(const char *s, char c)
{
	size_t	w;
	size_t	i;

	w = 0;
	i = 0;
	while (s[i] == c)
	{
		i++;
	}
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			w++;
		}
		i++;
	}
	return (w);
}

static char	*ft_word_writer(const char *s, size_t start, size_t end)
{
	size_t	i;
	size_t	j;
	char	*rs;

	i = 0;
	rs = (char *)malloc(end - start + 1);
	if (!rs)
		return (NULL);
	j = end - start;
	while (i < j)
	{
		rs[i] = s[start];
		i++;
		start++;
	}
	rs[i] = '\0';
	return (rs);
}

static void	*ft_free_mem(char **ptr, size_t j)
{
	while (j > 0)
	{
		free(ptr[--j]);
	}
	free(ptr);
	return (NULL);
}

static char	**ft_word_filler(char **ptr, const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			ptr[j] = ft_word_writer(s, start, i);
			if (!ptr[j])
				return (ft_free_mem(ptr, j));
			j++;
		}
	}
	ptr[j] = NULL;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;

	if (!s)
		return (NULL);
	ptr = (char **)malloc(sizeof(char *) * (ft_word_counter(s, c) + 1));
	if (!ptr)
		return (NULL);
	return (ft_word_filler(ptr, s, c));
}

/*
int main()
{
	char *s = "ilyas bakri is a student in 1337";

	char **ptrs = ft_split(s, ' ');

	for (size_t i = 0; i < ft_word_counter(s, ' '); i++)
	{
		printf("%s\n", ptrs[i]);
	}
	return 0;
}
*/
