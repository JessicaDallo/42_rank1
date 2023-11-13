/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:04:44 by marvin            #+#    #+#             */
/*   Updated: 2023/11/10 11:04:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"



char	*ft_strchr(const char *stash, int c)
{
	while (*stash && *stash != (unsigned char)c)
		stash++;
	if (*stash == (unsigned char)c)
		return ((char *)stash);
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		lens1;
	int		lens2;
	int		i;
	char	*s3;

	if ((!s1 && !s2) || (!s1 && s2) || (s1 && !s2))
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	s3 = (char *)malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (!s3)
		return (NULL);
	i = -1;
	while (s1[++i])
		s3[i] = s1[i];
	i = -1;
	while (s2[++i])
	{
		s3[lens1] = s2[i];
		lens1++;
	}
	s3[lens1] = '\0';
	return (s3);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}