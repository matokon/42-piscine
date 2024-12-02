#include <stdio.h>
int	ft_atoi(const char *str)
{
    int result;
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        result = (result * 10) + (str[i] - '0'); 
        i++;
    }
    return result;
}

int main()
{
    int res = ft_atoi("12334");
    printf("%d", res);
}