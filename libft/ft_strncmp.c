/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:21:13 by gussoare          #+#    #+#             */
/*   Updated: 2022/05/26 10:39:39 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while (n--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		if (*str1 == 0 || *str2 == 0)
			return (0);
		str1++;
		str2++;
	}
	return (0);
}
/*#include <stdio.h>

int	main()
{
	char str1[50] = "test\200";
	char str2[50] = "test\0";
	int n;

	n = 6;
	printf("%d", ft_strncmp(str1, str2, n));
	printf("%d", strncmp(str1, str2, n));

	return(0);
}*/
