#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;
	char	*s;
	char	ch;

	i = 0;
	s = (char *)str;
	ch = c;
	if (ch == '\0')
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		while (s[i] == c)
		{
			return ((char *)s + i);
		}
		i++;
	}
	return (NULL);
}

// int main () {
// 	const char str[] = "jessica gosta de arroz";
// 	const char ch = 's';
// 	printf ("%s\n", strchr(str, ch));
// 	printf ("%s\n", strchr(str, ch));
// 	return 0;
// }