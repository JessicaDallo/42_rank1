#include <stdio.h>
#include <string.h>

void    *ft_memset(void *str, int c, size_t n)
{
        size_t    i;
        char    *s;

        i = 0;
        s = str;
       while(i < n) 
       { 
                s[i] = c;
                i++;
       }
       return (s);
}
int	main()
{
	char x[50];
        char	s = '%';
	printf("%s\n", ft_memset(x, s, 50));
	printf("%s\n", memset(x, s, 50));
	return (0);
}