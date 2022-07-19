/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:38:11 by gussoare          #+#    #+#             */
/*   Updated: 2022/05/26 10:41:30 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z' )
		c += 32;
	return (c);
}
/*#include <stdio.h>

int main()
{
	char c;

	c = 'G';
	printf("%c", ft_tolower(c));
	return (0);
}*/
