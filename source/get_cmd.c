/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_cmd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:59:51 by gussoare          #+#    #+#             */
/*   Updated: 2022/07/29 14:16:54 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static char	**ft_trim(char **cmd)
{
	int		i;


	i = 0;
	while (cmd[i])
	{
		cmd[i] = ft_strtrim(cmd[i], "'\"");
		i++;
	}
	return (cmd);
}

char	**get_cmd(char *argv)
{
	char	**cmd;
	char	**path;
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
		{
			error_exit_path(argv);
			return (0);
		}
	}
	else
		cmd = ft_split(argv, ' ');
	cmd = ft_trim(cmd);
	return (cmd);
}
