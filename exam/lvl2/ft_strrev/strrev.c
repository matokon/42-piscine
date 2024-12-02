#include <stdio.h>
char	*ft_strrev(char *str)
{
	int		lenght;
	int		i;
	char	temp;

	lenght = 0;
	i = 0;
	while (str[lenght])
	{
		lenght++;
	}
    lenght = lenght - 1;
	while (i < lenght)
	{
		temp = str[i];
		str[i] = str[lenght];
		str[lenght] = temp;
		lenght--;
		i++;
	}
	return (str);
}

int main()
{
    char str[] = "string";
    printf("%s",ft_strrev(str));
}