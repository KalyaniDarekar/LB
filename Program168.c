

#include <stdio.h>
#include <stdlib.h>
float AverageDisplay(int iNo)
{
 int iDigit = 0;
 int iSum = 0;
 int iCnt = 0;
 if(iNo <0)
 {
    iNo = -iNo;
 }
 while (iNo != 0)
{
    iDigit = iNo%10;
    iSum = iSum +iDigit;
    iCnt ++;
 //----------------- Business logic----------------------------------------   
    iNo = iNo/10;
   
   }

return iSum/iCnt;
}


int main ()
{

int iValue = 0;
float fRet = 0.0f;
printf("Enter value:\n");
scanf("%d",&iValue);
fRet = AverageDisplay(iValue);
printf("Average:%f\n",fRet);
return EXIT_SUCCESS;

}