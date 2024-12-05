#include <unistd.h>

int main(int argc, char *argv[])
{   
    int i;
    i = 0;
    char zm;
    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            zm = argv[1][i];
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {   
                zm -= 32;
                write(1,&zm,1);
            }
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                zm += 32;
                write(1,&zm,1);
            }
            i++;
            
        }
        write(1,"\n",1);
    }
    else
    {
        return '\n';
        
    }
}