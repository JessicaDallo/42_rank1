/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 08:15:03 by marvin            #+#    #+#             */
/*   Updated: 2023/11/15 08:15:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
//#include "get_next_line_utils.c"

char	*ft_getline(char **stash)
{
	char	*temp;
	char	*getline;
	int		i;

	i = 0;
	while ((*stash)[i] && (*stash)[i] != '\n')
		i++;
	if (i == ft_strlen(*stash))
	{
		getline = ft_substr(*stash, 0, i);
		ft_free(stash);
		return (getline);
	}
	else
	{
		i++;
		getline = ft_substr(*stash, 0, i);
		temp = ft_substr(*stash, i, ft_strlen(*stash) - i);
		ft_free(stash);
		*stash = temp;
	}
	if (!getline)
		ft_free(stash);
	return (getline);
}

void	ft_read(int fd, char **stash)
{
	char	*line;
	char	*temp;
	int		rbyte;

	line = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!line)
		return ;
	rbyte = 1;
	while (stash != NULL && *stash && !ft_strchr(*stash, '\n') && rbyte != 0)
	{
		rbyte = read(fd, line, BUFFER_SIZE);
		if (rbyte == -1)
		{
			ft_free(stash);
			break ;
		}
		line[rbyte] = '\0';
		temp = ft_strjoin(*stash, line);
		ft_free(stash);
		*stash = temp;
	}
	ft_free (&line);
}

char	*get_next_line(int fd)
{
	static char	*stash;

	if (fd < 0 && BUFFER_SIZE <= 0)
		return (NULL);
	if (!stash)
		stash = ft_strjoin("", "");
	ft_read(fd, &stash);
	if (stash == NULL)
		return (NULL);
	if  (!ft_strlen(stash))
	{
		ft_free(&stash);
		return (NULL);
	}
	return (ft_getline(&stash));
}

// int main()
// {
// 	char	*file = "readFile.txt";
// 	int fd = open(file, O_RDWR);

// 	if (fd == -1)
// 	{
// 		printf("\nErro ao abrir o arquivo!\n");
// 		exit(1);
// 	}
// 	else
// 	{
// 		printf("\n Oarquivo: %s abriu!\n", file);
// 	}

// 	char *linha = get_next_line(fd);
// 	printf("\n Conteudo:\n %s\n", linha);
// 	linha = get_next_line(fd);
// 	printf("\n %s\n", linha);
// 	linha = get_next_line(fd);
// 	printf("\n %s\n", linha);
// 	linha = get_next_line(fd);
// 	printf("\n %s\n", linha);
// 	linha = get_next_line(fd);
// 	printf("\n %s\n", linha);
// 	linha = get_next_line(fd);
// 	printf("\n %s\n", linha);
// 	return 0;
// }