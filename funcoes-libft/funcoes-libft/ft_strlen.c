#include "libft.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int	main()
// {
// 	char x[] = "jessica";
// 	printf("%zu\n", ft_strlen(x));
// 	printf("%zu\n", strlen(x));
// 	return (0);
// }