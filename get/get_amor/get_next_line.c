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


char *get_next_line(int fd)
{
    int bytes_read;
    int i;
    char *data;
    char t;

    if ((BUFFER_SIZE <= 0) || fd < 0)
		return (NULL);
    data = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
    if(!data)
    {
        free(data);
        return (NULL);
    }

    i=0;
    while (data[i] != '\n' && bytes_read != 0)
    {
        bytes_read = read(fd, &t, BUFFER_SIZE);
        if (bytes_read == -1)
		{
			return (NULL);
		}







































        
        data[i++] = &t;
    }

    return data;
}

// int main()
// {

//     char *fileName = "hello.txt";

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
// }