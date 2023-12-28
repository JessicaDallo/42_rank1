/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 10:14:00 by marvin            #+#    #+#             */
/*   Updated: 2023/12/22 10:14:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

char	*trim_stash(char *stash)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	j = 0;
	while (stash[i] != '\n' && stash[i] != '\0')
		i++;
	if (stash[i] == '\0')
	{
		free(stash);
		return (NULL);
	}
	temp = (char *)malloc(sizeof(char) *(ft_strlen(stash) - i + 1));
	if (!temp)
		return (NULL);
	if (stash[i] == '\n')
		i++;
	while (stash[i] != '\0')
		temp[j++] = stash[i++];
	temp[j] = '\0';
	free(stash);
	return (temp);
}

char	*ft_newline(char *stash)
{
	int		i;
	char	*line;

	i = 0;
	if (!stash[i])
		return (NULL);
	while (stash[i] != '\n' && stash[i] != '\0')
		i++;
	if (stash[i] == '\0')
		line = malloc(sizeof(char) * (i + 1));
	else
		line = malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (stash[i] != '\0' && stash[i] != '\n')
	{
		line[i] = stash[i];
		i++;
	}
	if (stash[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*ft_read(char *stash, int fd)
{
	ssize_t	rbytes;
	char	*temp;

	rbytes = 1;
	while (ft_check(stash) == 0 && rbytes != 0)
	{
		temp = malloc((BUFFER_SIZE + 1) * sizeof(char));
		if (!temp)
			return (NULL);
		rbytes = read (fd, temp, BUFFER_SIZE);
		if (rbytes == -1)
		{
			free (stash);
			free (temp);
			return (NULL);
		}
		temp[rbytes] = '\0';
		if (!temp)
			return (NULL);
		stash = ft_strjoin(stash, temp);
		free (temp);
	}
	return (stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	stash = ft_read(stash, fd);
	if (!stash)
		return (NULL);
	line = ft_newline(stash);
	stash = trim_stash(stash);
	return (line);
}

/*int main(void)
{
	int i = 1;
	int file;
	char *line;
	file = open ("read1.txt", O_RDONLY);
	while (line = get_next_line(file))
	{
		printf("linha %d: %s", i, line);
		i++;
		free(line);
	}
	// line = get_next_line(file);
	// printf("%d\n", BUFFER_SIZE);
	// printf("%s", line);
	// free (line);
	close (file);
	return (0);
}*/