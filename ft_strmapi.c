/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilyas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 02:30:55 by bilyas            #+#    #+#             */
/*   Updated: 2025/10/30 02:30:55 by bilyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*ptr;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*
static char ft_n(unsigned int i, char c)
{
	if(i % 2 == 0 && c >= 'a' && c <= 'z')
		return (c - 32);
	return(c);
}

int main()
{
	char (*ptr)(unsigned int i, char c);

	ptr = &ft_n;

	char s[] = "ilyaS baKri";

	printf("%s\n", ft_strmapi(s, ptr));

	return 0;

}
*/