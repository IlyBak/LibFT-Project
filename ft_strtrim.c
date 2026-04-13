/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilyas <bilyas@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 20:13:06 by bilyas            #+#    #+#             */
/*   Updated: 2025/11/09 10:43:25 by bilyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	if (start > end)
		return (ft_strdup(""));
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	ptr = (char *)malloc(end - start + 2);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, &s1[start], end - start + 2);
	return (ptr);
}
/*
int main()
{
	char s1[] = "ilyas-be";
	char s2[] = "thfil yashft";

	printf("%s\n", ft_strtrim(s1, "b-e"));
	printf("%s\n", ft_strtrim(s2, "thf"));
	
	return 0;
}
*/