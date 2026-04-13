/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilyas <bilyas@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 23:02:32 by bilyas            #+#    #+#             */
/*   Updated: 2025/11/06 16:19:50 by bilyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	ch;

	i = 0;
	ch = (char)c;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
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
	
	r = strchr(s, '\0');
	printf("%s", r);

	r = ft_strchr(s, '\0');
	//printf("\n%s\n", r);
	printf("%s", r);
	

	return 0;
}
*/