/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 14:00:10 by gussoare          #+#    #+#             */
/*   Updated: 2022/05/26 10:22:01 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lennum(long nb, int i)
{
	if (nb == 0)
		return (1);
	i = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

static char	*ft_putnum(char *str, long nb, int i, int k)
{
	if (k > 0)
		str[0] = '-';
	str[i + k] = 0;
	i--;
	while (i >= 0)
	{
		str[i-- + k] = (nb % 10) + 48;
		nb = nb / 10;
	}
	return (&*str);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		i;
	int		j;
	int		k;

	nb = (long) n;
	j = 0;
	i = 0;
	k = 0;
	if (nb < 0)
	{
		nb = nb * (-1);
		i++;
		k++;
	}
	i = ft_lennum(nb, i);
	str = malloc((i + k + 1) * sizeof(char));
	if (str == 0)
		return (0);
	str = ft_putnum(str, nb, i, k);
	return (str);
}
/*#include <stdio.h>

int main()
{
	int	c;

	c = -2147483648;
	printf("%s", ft_itoa(c));
	return (0);
}*/
