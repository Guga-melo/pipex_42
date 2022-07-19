/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:22:31 by gussoare          #+#    #+#             */
/*   Updated: 2022/05/26 10:36:41 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*buffer;

	i = 0;
	while (s1[i] != '\0')
		i++;
	buffer = malloc((i + 1) * sizeof(char));
	if (buffer == 0)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		buffer[i] = s1[i];
		i++;
	}
	buffer[i] = 0;
	return (buffer);
}
/*#include <string.h>
#include <stdio.h>

int main()
{
	char str[50] = "Ola mundo";

	printf("%s", strdup(str));
	return (0);
}*/
