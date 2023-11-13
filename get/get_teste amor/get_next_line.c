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

char	*ft_nextl(char *stash)
{
	char	*str;
	int		i;
	int		y;

	i = 0;
	y = 0;
	if (!stash[i])
	{
		free(stash);
		return (NULL);
	}
	if (stash[i + 1])
	{
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
	}
	else
	{
		str = NULL;
	}
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
			free(line);
			break;
		}
		line[rbyte] = '\0';
		char *temp = ft_strjoin(stash, line);
		free(stash);
		stash = temp;
	}
	free(line);
	return (stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;

	if ((BUFFER_SIZE <= 0) || fd < 0)
		return (NULL);
	//free(stash);
	if (!stash)
		stash = ft_strjoin("", "");
	stash = ft_read(fd, stash);
	if (!stash)
	{
		return (NULL);
	}
	stash = ft_nextl(stash);
	return (stash);
}


// int main()
// {

//     char *fileName = "readFile.txt";

//     int fd = open(fileName, O_RDWR); //https://www.dca.ufrn.br/~adelardo/cursos/DCA409/node19.html

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
// 	*linha = get_next_line(fd);
//     printf("\n");
//     printf("File Contents: %s\n", linha);
//  *linha = get_next_line(fd);
//     printf("\n");
//     printf("File Contents: %s\n", linha);
//     return 0;
// }