/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 10:59:50 by marvin            #+#    #+#             */
/*   Updated: 2023/12/22 10:59:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_check(char *stash)
{
	int	i;

	i = 0;
	if (!stash)
		return (0);
	while (stash[i] != '\0')
	{
		if (stash[i] == '\n' || stash[i] == '\0')
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *stash, char *temp)
{
	int		i;
	int		j;
	char	*temp_stash;

	i = 0;
	j = 0;
	if (!stash)
	{
		stash = malloc(sizeof(char));
		stash[0] = '\0';
	}
	temp_stash = (char *)malloc(sizeof(char) * ((ft_strlen
					(stash) + ft_strlen(temp)) + 1));
	if (!stash)
		return (NULL);
	while (stash[i] != '\0')
	{
		temp_stash[i] = stash[i];
		i++;
	}
	while (temp[j] != '\0')
		temp_stash[i++] = temp[j++];
	free (stash);
	temp_stash[i] = '\0';
	return (temp_stash);
}
