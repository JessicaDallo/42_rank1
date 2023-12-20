/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:07:29 by marvin            #+#    #+#             */
/*   Updated: 2023/12/19 16:07:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_line(char **stash)
{
	int		i;
	char	*line;
	char	*rest;

	i = 0;
	while ((*stash)[i] && (*stash)[i] != '\n')
		i++;
	if (i == ft_strlen(*stash))
	{
		line = ft_substr(*stash, 0, i);
		ft_free(stash);
		return (line);
	}
	else
	{
		i++;
		line = ft_substr(*stash, 0, i);
		rest = ft_substr(*stash, i, ft_strlen(*stash) - i);
		ft_free(stash);
		*stash = rest;
	}
	if (!line)
		ft_free(stash);
	return (line);
}

void	ft_read(char **stash, int fd)
{
	int		rbytes;
	char	*buffer;
	char	*temp;

	buffer = (char *) malloc ((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return ;
	rbytes = 1;
	while (stash != NULL && *stash && !ft_strchr(*stash, '\n') && rbytes != 0)
	{
		rbytes = read (fd, buffer, BUFFER_SIZE);
		if (rbytes == -1)
		{
			ft_free(stash);
			break ;
		}
		buffer[rbytes] = '\0';
		temp = ft_strjoin(*stash, buffer);
		ft_free(stash);
		*stash = temp;
	}
	ft_free(&buffer);
}

char	*get_next_line(int fd)
{
	static char	*stash;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!stash)
		stash = ft_strjoin("", "");
	ft_read(&stash, fd);
	if (stash == NULL)
		return (NULL);
	if (!ft_strlen(stash))
	{
		ft_free(&stash);
		return (NULL);
	}
	return (ft_line(&stash));
}
