/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilyas <bilyas@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 23:50:46 by bilyas            #+#    #+#             */
/*   Updated: 2025/11/07 02:08:28 by bilyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	ptr = (char *)malloc(len + 1);
	if (ptr == 0)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
#include <string.h>

int main()
{
	char s[] = "filyas bk";
	
	char *p1 = ft_strdup(s);
	char *p2 = strdup(s);

	printf("%s\n", p1);
	printf("%s", p2);

	
	free(p1);
	free(p2);
	
	return 0;
}
*/