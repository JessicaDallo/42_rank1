#include "libft.h"

int     ft_tolower(int c)
{
        if(c >= 'A' && c <= 'Z')
        {
                c = c + 32;
        }
        return (c);
}

// int	main()
// {
// 	char x = 'S';
// 	printf("%c\n", ft_tolower(x));
// 	printf("%c\n", tolower(x));
// 	return (0);
// }