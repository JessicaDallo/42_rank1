#include "libft.h"


void ft_striteri(char *s, void (*f)(unsigned int,
char*))
{
	unsigned int	i;
	if(!s)
		return;
	while (s[i])
	{
		(*f)(i ,s[i])
		i++;
		s++;
	}
}

void ft_print(unsigned int i, char *str)
{
	str* = str + i;
}
int main () {
	char str[] = "jEsSiCa";
	ft_striteri(str, ft_test);
	return (0);
}