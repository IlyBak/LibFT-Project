/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilyas <bilyas@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:01:33 by bilyas            #+#    #+#             */
/*   Updated: 2025/11/05 16:19:12 by bilyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	cb;

	cb = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = cb;
		i++;
	}
	return (s);
}

/*
#include <string.h>

int main()
{
	int i;
	char ar[10] = "abcdefghi";

	i = 100;
	ft_memset(ar, i, 5);
	
	printf("%s",ar);
	
	return 0;
}
*/