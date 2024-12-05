#include <unistd.h>

int main(int argc,char *argv[])
{
    if(argc != 2)
    {
        write(1,"\n",1);
    }
    else
    {
        int i;
        i = 0;
        while (argv[1][i] != '\0')
        {
            char zm;
            zm = argv[1][i];
            if(zm == 'z')
            {
                write(1,"a",1);
            }
            if(zm == 'Z')
            {
                write(1,"A",1);
            }
            if(zm >= 'a' && zm < 'z')
            {
                zm = (zm + 1);
                write(1,&zm,1);
            }
            if(zm >= 'A' && zm < 'Z')
            {
                zm = (zm + 1);
                write(1,&zm,1);
            }
            i++;
        }
        
    }
}