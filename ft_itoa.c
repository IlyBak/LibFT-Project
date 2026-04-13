/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilyas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:02:13 by bilyas            #+#    #+#             */
/*   Updated: 2025/10/29 11:02:13 by bilyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size_detector(long i)
{
	int		l;
	long	n;

	l = 1;
	n = i;
	if (n < 0)
	{
		n = -n;
		l++;
	}
	while (n >= 10)
	{
		n = n / 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	char			*c;
	long			nb;
	unsigned int	j;

	nb = n;
	j = ft_size_detector(nb);
	c = (char *)malloc(j + 1);
	if (!c)
		return (NULL);
	c[j] = '\0';
	if (nb < 0)
	{
		nb = -nb;
		c[0] = '-';
	}
	if (nb == 0)
		c[0] = '0';
	while (nb > 0)
	{
		c[--j] = (nb % 10) + '0';
		nb /= 10;
	}
	return (c);
}

/*
int main()
{
	int i = 134335;

	char *s  = ft_itoa(i);

	printf("%s", s);

	return 0;
}
*/