#include <stdio.h>
#include<stdlib.h>

void Display(int ptr[])
{
 printf("%d\n",ptr[0]);
 printf("%d\n",ptr[1]);
 printf("%d\n",ptr[2]);
 printf("%d\n",ptr[3]);
 printf("%d\n",ptr[4]);
}


int main()
{
int Arr[3] = {10,20,30};

Display(Arr) ;  //Display(100);


    return EXIT_SUCCESS;
}