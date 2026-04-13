/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilyas <bilyas@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 22:38:27 by bilyas            #+#    #+#             */
/*   Updated: 2025/11/06 20:28:15 by bilyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*c1;
	const unsigned char	*c2;

	c1 = (const unsigned char *)s1;
	c2 = (const unsigned char *)s2;
	i = 0;
	while (i < n && c1[i] == c2[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (c1[i] - c2[i]);
}

/*
#include <string.h>
int main()
{
	char s1[] = "ilyas bakri";
	char s2[] = "ilyas bihfh";
	
	printf("%d\n", ft_memcmp(s1, s2, 12));
	printf("%d", memcmp(s1, s2, 12));
	
	return 0;

}
*/