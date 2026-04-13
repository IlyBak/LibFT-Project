/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilyas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 23:32:02 by bilyas            #+#    #+#             */
/*   Updated: 2025/10/26 23:32:02 by bilyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			i;

	if (count != 0 && size > SIZE_MAX / count)
		return (NULL);
	ptr = (unsigned char *)malloc(count * size);
	if (ptr == 0)
		return (NULL);
	i = 0;
	while (i < (count * size))
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
/*
int main()
{
	int i = 0;

	char *p = ft_calloc(4, 1);

	printf("%p", p);

	free(p);

	return 0;
}
*/