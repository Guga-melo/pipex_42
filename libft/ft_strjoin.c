/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 07:55:23 by gussoare          #+#    #+#             */
/*   Updated: 2022/05/26 09:40:31 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		j;
	int		i;

	if (!s1 || !s2)
		return (0);
	result = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char));
	if (result == 0)
		return (0);
	i = 0;
	j = 0;
	while (s1[i] != 0)
	{
		result[i + j] = s1[i];
		i++;
	}
	while (s2[j] != 0)
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + j] = 0;
	return (result);
}
/*#include <string.h>
#include <stdio.h>

int main()
{
	char str1[100] = "guga abraça";
	char str2[100] = "a baleia beluga que descança no pier";
	printf("%s", ft_strjoin(str1, str2));
	return (0);
}*/
