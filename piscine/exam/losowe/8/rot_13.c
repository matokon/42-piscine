#include <unistd.h>

int main(int argc, char *argv[])
{   
    int i;
    i = 0;
    if(argc != 2)
    {
        write(1,"\n",1);
    }
    else
    {
        while (argv[1][i] != '\0')
        {
            char zm = argv[1][i];
            if(zm >= 'a' && zm <= 'z')
            {
                if(zm + 13 > 122)
                {
                    zm = zm - 13;
                    write(1,&zm,1);
                }
                else
                {
                    zm = zm + 13;
                    write(1,&zm,1);
                }
            }
            if(zm >= 'A' && zm <= 'Z')
            {
                if(zm + 13 > 90)
                {
                    zm = zm - 13;
                    write(1,&zm,1);
                }
                else
                {
                    zm = zm + 13;
                    write(1,&zm,1);
                } 
            }
            i++;
        }
        
    }
}