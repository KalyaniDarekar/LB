#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char Arr[10] = "Ganesh";  // static string passing   in double quote no need to keep '\0'

    printf("%s\n",Arr);
    printf("Size of array is :%d\n",sizeof(Arr));
    return EXIT_SUCCESS;
}