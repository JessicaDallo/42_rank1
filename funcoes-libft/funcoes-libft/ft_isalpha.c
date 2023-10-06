#include "libft.h"

int	ft_isalpha(int c)
{

	if((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	
	return (0);
}
// int	main()
// {
// 	int x = '1';
// 	printf("%d\n", ft_isalpha(x));
// 	printf("%d\n", isalpha(x));
// 	return (0);
// }
