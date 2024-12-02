#include <stdio.h>
int	ft_atoi(const char *str)
{
    int sign;
    sign = 1;

    int i;
    i = 0;

    int result;
    result = 0;

    if(str[i] == '-')
    {
        sign = sign * (-1);
        i++;
    }
    else
    {
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = (result * 10) + (str[i] - '0');
        i++;
    }
    }
    
    return result * sign;
    


}
int main()
{
    const char *zm = "-1234";
    printf("%d\n", ft_atoi(zm));
    return 0;
}