#include <stdio.h>
int    ft_strcmp(char *s1, char *s2)
{
    int i;
    i = 0;
    int flag;
    flag = 0;
    
    while(s1[i] != '\0')
    {
        if (s1[i] < s2[i])
        {
            flag = -1;
        }
        else if (s1[i] > s2[i])
        {
            flag = 1;
        }
        i++;
    }
    return flag;
}

int main()
{
    // char zm1 = "abc";
    // char zm2 = "abc";
    printf("%d", ft_strcmp("abc","aba"));
}