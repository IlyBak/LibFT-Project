/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilyas <bilyas@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 22:06:20 by bilyas            #+#    #+#             */
/*   Updated: 2025/11/07 02:51:14 by bilyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	size_t			i;
	size_t			j;
	size_t			slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	j = start;
	while (s[j] != '\0' && i < len)
	{
		ptr[i] = s[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*
int main()
{
	char s[] = "ilyas bakri";
	
	char *p = ft_substr(s, 2, 7);

	printf("%s", p);
	free (p);
	
	return 0;

}
*/