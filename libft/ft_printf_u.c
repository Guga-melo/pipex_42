/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 11:21:57 by gussoare          #+#    #+#             */
/*   Updated: 2022/07/13 08:42:31 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lennum(unsigned int nb, int i)
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

static char	*ft_putnum(char *str, unsigned int nb, int i, int k)
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

static char	*ft_iitoa(int n)
{
	char			*str;
	unsigned int	nb;
	int				i;
	int				j;
	int				k;

	nb = (unsigned int) n;
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

int	ft_printf_u(unsigned int n)
{
	char	*str;
	int		len;

	len = 0;
	str = ft_iitoa(n);
	ft_putstr_fd(str, 1);
	len = ft_strlen(str);
	free(str);
	return (len);
}
