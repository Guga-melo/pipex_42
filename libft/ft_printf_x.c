/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:09:14 by gussoare          #+#    #+#             */
/*   Updated: 2022/07/13 08:43:00 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lennum(unsigned long n)
{
	int	size;

	size = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 16;
		size++;
	}
	return (size);
}

int	ft_printf_x(unsigned long n)
{
	int	size;

	size = 0;
	size = ft_lennum(n);
	if (n >= 16)
	{
		ft_printf_x(n / 16);
		ft_printf_x(n % 16);
	}
	else if (n <= 9)
		ft_putchar_fd(n + '0', 1);
	else
		ft_putchar_fd(n - 10 + 'a', 1);
	return (size);
}
