#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int No = 14;
    int Ans = 0;

    Ans = No >> 3;   // formula No/2^3 = No/8 = 14/8 = 1
    printf(" %d\n",Ans);
    
    return EXIT_SUCCESS;

}