
#include "libft.h"

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        c = c - 32; 
    }

    return (c);
}

// int	main()
// {
// 	char x = 'z';
// 	printf("%c\n", ft_toupper(x));
// 	printf("%c\n", toupper(x));
// 	return (0);
// }