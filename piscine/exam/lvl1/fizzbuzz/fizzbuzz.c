#include <unistd.h>

void print_number(int number)
{
    if(number > 9)
    {
        print_number(number % 10);
    }
    write(1,&"0123456789"[number % 10],1);
}

int main(void)
{
    int number;
    number = 1;
    while (number <= 100)
    {
        if(number % 3 == 0 && number % 5 == 0)
        {
            write(1,"fizzbuzz",8);
            write(1,"\n",1);
        }
        else if(number % 3 == 0)
        {
            write(1,"fizz",4);
            write(1,"\n",1);
        }
        else if(number % 5 == 0)
        {
            write(1,"buzz",4);
            write(1,"\n",1);
        }
        else
        {
            print_number(number);
            write(1,"\n",1);
        }
        number++;
    }
    return 0;
    
}