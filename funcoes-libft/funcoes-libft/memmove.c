#include "libft.h"


void    *ft_memmove(void *str1, const void *str2, size_t n)
{
        size_t    i;

        i = 0;
        while(i < n)
        {
                ((unsigned char *)str1)[i] = ((const char*)str2)[i];
                i++;
        }
        return (str1);
}
// int	main()
// {
// 	char x[] = "jessica";
//         char y[] = "arnaldojessica";
// 	printf("%s\n", (char *)ft_memmove(y, x, 7));
// 	printf("%s\n", (char *)memmove(y, x, 7));
// 	return (0);
// }