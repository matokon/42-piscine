#include <unistd.h>
int main(int argc, char *argv[])
{
    int i;
    i = 0;
    if(argc != 4)
    {
        return '\n';
    }
    while (argv[1][i])
    {
        if (argv[1][i] == argv[2][0])
        {
            write(1,&argv[3][0],1);
        }
        else
        {   
            write(1,&argv[1][i],1);
        }
        i++;
    }
    return 0;
}