#include <unistd.h>

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        write(1,"\n",1);
    }
    else
    {
        int i;
        i = 0;
        while(argv[1][i] != '\0')
        {
            char letter;
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                letter = 'z' - argv[1][i] + 'a';
                write(1,&letter,1);
            }
            else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                letter = 'Z' - argv[1][i] + 'A';
                write(1,&letter,1);
            }
            i++;
        }
    }
}