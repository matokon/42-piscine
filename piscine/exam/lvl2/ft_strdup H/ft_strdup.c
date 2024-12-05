#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		lenght;
	int		i;
	char	*new_str;

	lenght = 0;
	i = 0;
	while (src[lenght])
	{
		lenght++;
	}
	new_str = malloc(sizeof(char) * (lenght + 1));
	if (new_str == 0)
	{
		return (0);
	}
	while (src[i])
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}