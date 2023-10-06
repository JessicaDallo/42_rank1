#include "libft.h"

void    *ft_memset(void *str, int c, size_t n)
{
        size_t    i;
        unsigned char    *s;

        i = 0;
        s = str;
       while(i < n) 
       { 
                s[i] = c;
                i++;
       }
       return (s);
}
/*int	main()
{
	char x[50];
        int	s = '%';
	printf("%s\n", (char *)ft_memset(x, s, 7));
	printf("%s\n", (char *)ft_memset(x, s, 7));
	return (0);
}*/