#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main()
{
	char x[] = "jessica";
	printf("%d\n", ft_strlen(x));
	printf("%d\n", strlen(x));
	return (0);
}