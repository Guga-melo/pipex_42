/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:45:05 by gussoare          #+#    #+#             */
/*   Updated: 2022/05/26 07:51:56 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (!count || !size)
	{
		count = 1;
		size = 1;
	}
	if ((count * size) / count != size)
		return (0);
	p = malloc(count * size);
	if (p == 0)
		return (0);
	ft_bzero(p, count * size);
	return (p);
}

/*#include <string.h>
#include <stdio.h>

int main()
{
	printf("%s", ft_calloc(SIZE_MAX, SIZE_MAX));
	return (0);
}*/
