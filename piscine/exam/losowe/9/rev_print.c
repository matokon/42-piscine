#include <unistd.h>
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        write(1,"\n",1);
    }
    int lenght;
    lenght = 0;
    while (argv[1][lenght] != '\0')
    {
        lenght++;
    }
    while (lenght >= 0)
    {
        write(1,&argv[1][lenght],1);
        lenght--;
    }
    
    
}