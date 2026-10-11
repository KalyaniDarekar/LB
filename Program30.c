#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sName[30]; 
    int iAge = 0;
    float fMarks = 0.0; //: error: incompatible types: possible lossy conversion from double to float

    printf("Enter Your Name :\n");
    scanf("%s[^'\n']S", sName); // enter remains in buffer 
   

    printf("Enter Your Age :\n");
    scanf("%d", &iAge); 
    printf("Enter Your Marks :\n");
    scanf("%f", &fMarks);

    printf("Welcome %s\n", sName);

    return EXIT_SUCCESS;
}