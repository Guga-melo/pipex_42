/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_exit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:06:25 by gussoare          #+#    #+#             */
/*   Updated: 2022/07/26 14:43:11 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	error_exit_cmd(char *cmd)
{
	ft_putstr_fd("Command not found: ", 2);
	ft_putstr_fd(cmd, 2);
	ft_putchar_fd('\n', 2);
	exit(EXIT_FAILURE);
}

void	error_exit_path(char *path)
{
	ft_putstr_fd(strerror(errno), 2);
	ft_putstr_fd(": ", 2);
	ft_putendl_fd(path, 2);
	exit(EXIT_FAILURE);
}

void	error_exit_file(char *file)
{
	perror(file);
	exit(EXIT_FAILURE);
}

void	error_exit_child(void)
{
	ft_putendl_fd(strerror(10), 2);
	exit(EXIT_FAILURE);
}
