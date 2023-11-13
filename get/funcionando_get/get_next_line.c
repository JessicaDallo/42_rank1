/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 07:28:59 by marvin            #+#    #+#             */
/*   Updated: 2023/11/10 07:28:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
//#include "get_next_line_utils.c"

char	*ft_get_line(char *stash)
{
	int		i;
	char	*str;

	i = 0;
	if (!stash[i])
		return (NULL);
	while (stash[i] && stash[i] != '\n')
		i++;
	str = (char *)malloc(i + 2 * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
	{
		str[i] = stash[i];
		i++;
	}
	// if (stash[i] == '\n')
	// {
	// 	str[i] = stash[i];
	// 	i++;
	// }
	str[i] = '\0';
	return (str);
}

char	*ft_nextl(char *stash)
{
	char	*str;
	int		i;
	int		y;

	i = 0;
	y = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (!stash[i])
		return (NULL);
	//aloca a memoria do tamanho restante tirando a linha ja lida, que está salva na variavel i
	str = (char *)malloc((ft_strlen(stash) - i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (stash[i])
	{
		str[y] = stash [i];
		y++;
		i++;
	}
	str[y] = '\0';
	free(stash);
	return (str);
}

char	*ft_read(int fd, char *stash)
{
	char	*line;
	int		rbyte;

	line = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!line)
		return (NULL);
	rbyte = 1; //depois vai receber a função read que rtetorna o valor de 0, -1 ou 1, enão interrompe ou não o proximo looping.
	while (!ft_strchr (stash, '\n') && rbyte != 0)
	{
		rbyte = read(fd, line, BUFFER_SIZE);
		if (rbyte == -1)
		{
			return (NULL);
		}
		line[rbyte] = '\0';
		stash = ft_strjoin(stash, line);
	}
	//free(line);
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if ((BUFFER_SIZE <= 0) || fd < 0)
		return (NULL);
	if (!stash)
		stash = ft_strjoin("", "");
	stash = ft_read(fd, stash);
	if (!stash)
		return (NULL);
	line = ft_get_line(stash);
	stash = ft_nextl(stash);
	return (ft_strjoin(line, stash));
}


// int main()
// {

//     char *fileName = "readFile.txt";

//     int fd = open(fileName, O_RDWR);

//     if (fd == -1)
//     {
//         printf("\nError Opening File!!\n");
//         exit(1);
//     }
//     else
//     {
//         printf("\nFile %s opened sucessfully!\n", fileName);
//     }

//     char *linha = get_next_line(fd);
//     printf("\n");
//     printf("File Contents: %s\n", linha);
//     // int bytesRead = read(fd, buffer, sizeof(buffer));

//     // printf("%d bytes read!\n", bytesRead);
//     // printf("File Contents: %s\n", buffer);

//     return 0;
// }