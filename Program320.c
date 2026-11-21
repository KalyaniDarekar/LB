#include <stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)  // addres , value
{
    int iCnt = 0;
    for (iCnt =0 ; iCnt<iLength; iCnt++ )
    {
      printf("%d\n",Arr[iCnt]);
    }
 
}
int main()
{
int Brr[5] = {10,20,30,40,50};

Display(Brr,5) ;  


    return EXIT_SUCCESS;
}