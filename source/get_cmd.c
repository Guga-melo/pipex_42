/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_cmd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:59:51 by gussoare          #+#    #+#             */
/*   Updated: 2022/07/25 13:24:30 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	**get_cmd(char *argv)
{
	char	**cmd;
	char 	**path;
	char	**split;
	int		i;

	i = 0;
	if (ft_memchr(argv, '/', 1))
	{
		split = ft_split(argv, ' ');
		if (access(split[0], F_OK | X_OK) == 0)
		{
			path = ft_split(argv, '/');
			while (path[++i])
			cmd = ft_split(path[i], ' ');
		}
		else
			return (0);
	}
	else
		cmd = ft_split(argv, ' ');
	return (cmd);
}
