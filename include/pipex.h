/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:12:31 by gussoare          #+#    #+#             */
/*   Updated: 2022/07/21 13:37:44 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdio.h>
# include <string.h>
# include <errno.h>
# include <sys/wait.h>
# include <fcntl.h>
# include "../libft/libft.h"

int		child1(char	**argv, char **envp, int *fd);
int		child2(char	**argv, char **envp, int *fd);
char	**get_cmd(char *argv);
char	*get_path(char **cmd, char **path);

#endif
