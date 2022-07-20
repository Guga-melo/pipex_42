/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   children.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 13:46:42 by gussoare          #+#    #+#             */
/*   Updated: 2022/07/20 13:52:58 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	child1(char	**argv, char **envp, int fd)
{
	child1 = fork();
	if (child1 == -1)
		return (2);
	if (child1 == 0)
	{
		dup2(fd[1], STDOUT_FILENO);
		cmd = get_cmd(argv[2]);
		path = get_path(cmd,envp);
		close(fd[1]);
		close(fd[0]);
		execve(path, cmd, envp);
	}
}

int	child2(char	**argv, char **envp, int fd)
{
	child2 = fork();
	if (child2 == -1)
		return (3);
	if (child2 == 0)
	{
		dup2(fd[0], STDIN_FILENO);
		cmd = get_cmd(argv[3]);
		path = get_path(cmd,envp);
		close(fd[1]);
		close(fd[0]);
		execve(path, cmd, envp);
	}
}
