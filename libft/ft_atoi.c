/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:07:10 by gussoare          #+#    #+#             */
/*   Updated: 2022/05/26 10:17:34 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_space(int c)
{
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

static int	ft_final(int val)
{
	if (val > 0)
		return (-1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	long	found;
	long	temp;
	int		val;

	val = 1;
	found = 0;
	while (ft_space(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			val = -1;
		str++;
		if (*str == '+' || *str == '-')
			return (0);
	}
	while (*str >= '0' && *str <= '9')
	{
		temp = found;
		found = (found * 10) + *str++ - 48;
		if (found < temp)
			return (ft_final(val));
	}
	return (val * found);
}
