#include <unistd.h>

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        write(1,"\n",1);
    }
    else
    {
        int repeat;
        repeat = 1;

        int i;
        i = 0;

        while (argv[1][i] != '\0')
        {
            if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                repeat = argv[1][i] - 'a';
            }
            else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                repeat = argv[1][i] - 'A';
            }
            while(repeat >= 0)
            {
                write(1,&argv[1][i],1);
                repeat--;
            }
            i++;
        }
        write(1,"\n",1);
        
    }
}