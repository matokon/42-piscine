#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        write(1,"\n",1);
    }
    else
    {   
        int i;
        i = 0;
        while (argv[1][i] != '\0')
        {
            char letter;
            letter = argv[1][i];
            if(letter >= 'a' && letter <= 'z')
            {
                letter = letter - 32;
                write(1,&letter,1);
            }
            else if(letter >= 'A' && letter <= 'Z')
            {
                letter = letter + 32;
                write(1,&letter,1);
            }
            i++;
        }
        
    }
}