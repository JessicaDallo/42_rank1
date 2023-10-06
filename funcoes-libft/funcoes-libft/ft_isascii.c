#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

// int	main()
// {
// 	int x = '1';
// 	printf("%d\n", ft_isascii(x));
// 	printf("%d\n", isascii(x));
// 	return (0);
// }
