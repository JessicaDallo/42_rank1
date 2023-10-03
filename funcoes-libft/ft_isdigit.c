#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

int	main()
{
	int x = 'a';
	printf("%d\n", ft_isdigit(x));
	printf("%d\n", isdigit(x));
	return (0);
}