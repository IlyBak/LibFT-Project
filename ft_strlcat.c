/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilyas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 21:52:57 by bilyas            #+#    #+#             */
/*   Updated: 2025/10/24 21:52:57 by bilyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		i;
	size_t		n;
	size_t		dlen;
	size_t		slen;

	if (!dest && size == 0)
		return (ft_strlen(src));
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	i = 0;
	if (size <= dlen)
		return (size + slen);
	else
	{
		n = dlen;
		while (n < (size - 1) && src[i] != '\0')
		{
			dest[n] = src[i];
			i++;
			n++;
		}
		dest[n] = '\0';
	}
	return (dlen + slen);
}

/*
int main()
{
    char d[7] = "abc";
    char a[] = "def";
    size_t i = ft_strlcat(d, a, 7);
    printf("result: %zu, dst: %s\n", i, d);
}
*/