#include <stdio.h>
int main ()
{
    int variable1 = 0;
    volatile int variable2 = 1;
    variable1=5;//asignar es con un =

    if(variable1 ==5)
    {
        variable1=10;
    }
    return 0;
}
