#include <stdio.h>
#include <string.h>

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

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s,'\0', n);
}

int	main()
{
	void x;
	printf("%d\n", ft_bzero(x, 5));
	printf("%d\n", bzero(x, 5));
	return (0);
}
