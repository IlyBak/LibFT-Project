/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilyas <bilyas@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 19:56:15 by bilyas            #+#    #+#             */
/*   Updated: 2025/11/05 01:31:54 by bilyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int n)
{
	if (n >= '0' && n <= '9')
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
	int i;
	int j;
	char c;

	c = '1';
	i = ft_isdigit(c);
	j = isdigit(c);

	printf("%d\n", i);
	printf("%d", j);

	return 0;
}

*/