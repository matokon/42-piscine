#include <unistd.h>

int main(int argc, char *argv[])
{
    if(argc == 2)
    {
        int repeat;
        repeat = 0;
        int i;
        i = 0;
        while (argv[1][i] != '\0')
        {
            if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                repeat = argv[1][i] - 'a' + 1;
            }
            if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                repeat = argv[1][i] - 'A' + 1;
            }
            
            while (repeat != 0)
            {
                write(1,&argv[1][i],1);
                repeat--;
            }
            i++;
        }
        write(1, "\n", 1);
    }
    else
    {
        return '\n';
    }
    
}