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
int Brr[7] = {10,20,30,40,50,60,70};

Display(Brr,7) ;  //Display(100,7);


    return EXIT_SUCCESS;
}