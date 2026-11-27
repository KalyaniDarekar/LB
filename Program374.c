#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// linear search
bool SearchElement(int Arr[] , int iLength,int iNo)
{
int iCnt = 0;
bool bFlag = false;

while (iCnt < iLength)
{
 if (Arr[iCnt]== iNo)
  {
    bFlag = true;
    break;   //early exit
  }
   iCnt++;
}
 return bFlag ;
}
//time complexity : 0(N)
int main()
{

int *ptr = NULL;
int iSize = 0 , iCnt = 0, iValue = 0;
bool bRet = false;

printf("Enter number of elements :\n");
scanf("%d",&iSize);

ptr = (int *) malloc (iSize *sizeof(int));
if(NULL == ptr) 
{
    printf("Error : Unable to allocate the memory \n");
    return EXIT_FAILURE;

}
 
printf("Enter the elements :\n");
for (iCnt = 0; iCnt < iSize ; iCnt++)
{
scanf("%d",&ptr[iCnt]);
}

printf("Enter the number that you want serch:\n ",iValue);
scanf("%d",&iValue);

//function call
 bRet = SearchElement(ptr ,iSize,iValue);
 if(bRet == true)
 {
    printf("Number found\n");

 }
 else 
 {
    printf("Number is not found\n");
 }

free(ptr);

    return EXIT_SUCCESS;
}

