/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilyas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 23:27:16 by bilyas            #+#    #+#             */
/*   Updated: 2025/11/09 21:38:03 by bilyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t					i;
	unsigned char			*ds;
	const unsigned char		*sr;

	if (!dest && !src)
		return (NULL);
	i = 0;
	ds = (unsigned char *) dest;
	sr = (const unsigned char *) src;
	while (i < n)
	{
		ds[i] = sr[i];
		i++;
	}
	return (dest);
}

/*
#include <string.h>

int main()
{
    char s1[] = "abcdefghijk";
	char s2[] = "abcdefghijk";
    int i = 0;
    
    char *p = (char *)ft_memcpy(&s1[0], &s1[2], 6);
	char *s = (char *)memcpy(&s2[0], &s2[2], 6);

    
    printf("%s", p);
	printf("\n%s", s);

	return 0;
}
*/