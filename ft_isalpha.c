/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilyas <bilyas@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 19:06:02 by bilyas            #+#    #+#             */
/*   Updated: 2025/11/05 01:27:10 by bilyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
#include <ctype.h>


int main()
{
	char c = 'G';
	int i;
	int j;

	i = ft_isalpha(c);
	j = isalpha(c);
	

	printf("my version : %d\n", i);
	printf("the original : %d", j);
	return 0;
}

*/