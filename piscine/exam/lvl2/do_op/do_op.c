#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    if(argc != 4)
    {
        printf("\n");
    }
    else
    {
        char sing;
        sing = argv[2][0];
        int result;
        if(sing == '-')
        {
            result = atoi(argv[1]) - atoi(argv[3]);
        }
        else if(sing == '+')
        {
            result = atoi(argv[1]) + atoi(argv[3]);
        }
        else if(sing == '*')
        {
           result = atoi(argv[1]) * atoi(argv[3]); 
        }
        else if(sing == '/')
        {
            result = atoi(argv[1]) / atoi(argv[3]);
        }
        else if(sing == '%')
        {
            result = atoi(argv[1]) % atoi(argv[3]);
        }
        printf("%d", result);
    }
}