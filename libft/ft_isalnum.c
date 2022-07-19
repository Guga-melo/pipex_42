/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:55:35 by gussoare          #+#    #+#             */
/*   Updated: 2022/05/26 10:19:20 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= '0') && (c <= '9')) || ((c >= 'a') && (c <= 'z'))
		|| ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

int main()
{
	char c;

	c = '{';
	printf("%d", ft_isalnum(c));
	return (0);
}*/
