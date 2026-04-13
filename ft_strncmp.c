/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilyas <bilyas@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 00:40:02 by bilyas            #+#    #+#             */
/*   Updated: 2025/11/06 16:40:43 by bilyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		result;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (i < n && s2[i] && s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	result = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (result);
}
/*
#include <string.h>

int main()
{
	char s1[] = "ilyas bakri";
	char s2[] = "ilyasbakri";

	int i = strncmp(s1, s2, 6);
	int j = ft_strncmp(s1, s2, 6);

	printf("%d and %d", i, j);

	return 0;
}
*/