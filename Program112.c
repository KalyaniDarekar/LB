#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckPrime( int iNo)
  {
     int iCnt = 0;
     for( iCnt =2;iCnt <= iNo/2; iCnt++ )  // no 2 is used for prime condition
     if((iNo%iCnt) == 0)
      {
        break;   // stop if the number is not prime
      }

      if (iCnt==(iNo/2) + 1)
     {
         return true;
     }
     else 
     {
      return false;
     }
}


int main(void)  // no input take -void
{
int iValue = 0;
bool bRet = false;
printf("Enter Number:\n");
scanf("%d",&iValue);
bRet = CheckPrime(iValue);

if (bRet)
{
  printf("It is Prime Number");
}
else 
{
   printf("It is Not a Prime Number");
}
  return EXIT_SUCCESS;
}