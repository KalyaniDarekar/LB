#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main ()
{
    char Arr[10] = "Ganesh";  
    char *ptr = NULL;
   
    printf("%c\n",*ptr);
    ptr++;
    printf("%c\n",*ptr);
    ptr++;
    printf("%c\n",*ptr);
    ptr++;
    printf("%c\n",*ptr);
    ptr++;
    return EXIT_SUCCESS;
}