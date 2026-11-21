#include <stdio.h>
#include<stdlib.h>
int Summation(int Arr[],int iLength)  // addres , value
{
    int iCnt = 0;
    int iSum = 0;


    for (iCnt =0 ; iCnt<iLength; iCnt++ )
    {
      iSum = iSum +Arr[iCnt];

    }
    return iSum;
 
}
int main()
{
int *ptr = NULL;
int iSize = 0, iCnt = 0;
int iRet = 0;

printf("Enter number of elements you want: \n");
scanf("%d",&iSize);

//step 1 - allocate the memory 
ptr = (int *)malloc(sizeof(int)*iSize);

 //step2 - use the memory 
printf("Enter the elements: \n"); 
for(iCnt = 0 ; iCnt<iSize; iCnt++)
{
scanf("%d",&ptr[iCnt]);
}

iRet = Summation( ptr ,iSize);
printf("Addition of all elements %d\n",iRet);
 //  step 3 - free the memory 
 free(ptr);

    return EXIT_SUCCESS;
}
