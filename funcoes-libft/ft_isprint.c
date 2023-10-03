#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 127)
	{
		  return (1);
	}
	return (0);
}

int	main()
{
	int x = ' ';
	printf("%d\n", ft_isprint(x));
	printf("%d\n", isprint(x));
	return (0);
}