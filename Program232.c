#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main ()
{
    char Arr[20] = "Ganesh pune";   // space also counted but not '\0'
    printf("%s\n",Arr);
    printf("Size of array is :%d\n",sizeof(Arr));
    printf("Length of string: %d\n",strlen(Arr));
    return EXIT_SUCCESS;
}