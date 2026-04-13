/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilyas <bilyas@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 22:44:44 by bilyas            #+#    #+#             */
/*   Updated: 2025/11/05 02:24:40 by bilyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

/*
#include <string.h>

int main()
{
	char str[5] = "1234";
	int j = 0;
	
	ft_bzero(str + 2, 2);
	
	while (j < 5)
	{
		printf("str[%d] : %c\n",j , str[j]);
		j++;
	}
	return 0;
}
*/