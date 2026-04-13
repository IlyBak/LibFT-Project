/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilyas <bilyas@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 21:54:56 by bilyas            #+#    #+#             */
/*   Updated: 2025/11/06 19:44:07 by bilyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		ch;
	const unsigned char	*w;

	i = 0;
	ch = (unsigned char)c;
	w = (const unsigned char *)s;
	while (i < n)
	{
		if (w[i] == ch)
		{
			return ((void *)&w[i]);
		}
		i++;
	}
	return (NULL);
}
/*
#include <string.h>

int main()
{
	char s[] = "ilyas bakri";
	
	printf("%p", ft_memchr(s, 'y', 16));
	printf("\n%p\n", memchr(s, 'y', 16));
	return 0;
}
*/