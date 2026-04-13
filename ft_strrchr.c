/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilyas <bilyas@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 00:03:25 by bilyas            #+#    #+#             */
/*   Updated: 2025/11/06 16:17:08 by bilyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	long	i;
	char	ch;

	i = ft_strlen(s) - 1;
	ch = (char)c;
	while (i >= 0)
	{
		if (s[i] == ch)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	i = ft_strlen(s);
	if (ch == '\0')
	{
		return ((char *)&s[i]);
	}
	else
	{
		return (0);
	}
}
/*
#include <string.h>

int main()
{
	char s[] = "ilyas bakri";

	char *r;
	
	r = strrchr(s, 'i');
	printf("%s", r);

	r = ft_strrchr(s, 'i');
	printf("\n%s\n", r);

	return 0;
}
*/