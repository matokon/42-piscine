#include <stdio.h>
int	    is_power_of_2(unsigned int n)
{
    int i;
    i = 2;
    if (n == 0) return 0;
    if (n == 1 || n == 2)
    {
        return 1;
    }
    while (n > i)
    {
        if(2 * i == n)
        {
            return 1;
        }
        i++;
    }
    return 0;
    
}
// int main() {

//     printf("%d\n", is_power_of_2(1));  // Wyjście: 1 (prawda)
//     printf("%d\n", is_power_of_2(2));  // Wyjście: 1 (prawda)
//     printf("%d\n", is_power_of_2(3));  // Wyjście: 0 (fałsz)
//     printf("%d\n", is_power_of_2(4));  // Wyjście: 1 (prawda)
//     printf("%d\n", is_power_of_2(8));  // Wyjście: 1 (prawda)
//     printf("%d\n", is_power_of_2(0));  // Wyjście: 0 (fałsz)
//     return 0;
// }