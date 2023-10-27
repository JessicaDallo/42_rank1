/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 22:29:31 by jessicadall       #+#    #+#             */
/*   Updated: 2023/10/24 16:44:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//junta uma str na outra, criando uma nova variavel com o malloc
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	int		i;
	char	*s3;

	if ((!s1 && !s2) || (s1 && !s2) || (!s1 && s2))
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	s3 = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!s3)
		return (NULL);
	i = -1;
	while (s1[++i])
		s3[i] = s1[i];
	i = -1;
	while (s2[++i])
	{
		s3[len1] = s2[i];
		len1++;
	}
	s3[len1] = '\0';
	return (s3);
}

// int	main(void)
// {
// 	char	s1[] = "jessica ";
// 	char	s2[] = "arnaldo";
// 	printf("%s\n", ft_strjoin(s1, s2));
// 	return (0);
// }