#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
        (char *)ft_memset(s, '\0', n);
}
/*int	main()
{
        char str[] = "oito";
        ft_bzero(str, 4);
        printf("%s\n", str);
	return (0);
}*/