/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilyas <bilyas@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 21:17:44 by bilyas            #+#    #+#             */
/*   Updated: 2025/11/05 20:27:18 by bilyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dst;
	const unsigned char	*sr;

	i = 0;
	dst = (unsigned char *) dest;
	sr = (const unsigned char *) src;
	if (dst <= sr)
	{
		while (i < n)
		{
			dst[i] = sr[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			dst[i] = sr[i];
		}
	}
	return (dest);
}

/*
#include <string.h>

int main()
{
    char s1[] = "abcdefghij";
    char s2[] = "abcdefghij";
    char s3[] = "abcdefghij";
    char s4[] = "abcdefghij";
    
    char *p = (char *)memmove(&s1[2], &s1[0], 6);
    char *s = (char *)ft_memmove(&s2[2], &s2[0], 6);
    char *c = (char *)memmove(&s3[0], &s4[2], 6);
    char *d = (char *)ft_memmove(&s4[0], &s4[2], 6);

    
    printf("%s", p);
    printf("\n%s", s);
    printf("\n%s", c);
    printf("\n%s", d);

    return 0;
}
*/
