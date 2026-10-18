 #include <stdio.h>  //type def 
#include <stdlib.h>

typedef unsigned long  long ULONG;

ULONG Factorial(int iNo)
{
  int iCnt = 0;
  ULONG ifact = 0;
  
  for(iCnt = 1 ,ifact = 1 ; iCnt <= iNo; iCnt++)
  {
    ifact = ifact * iCnt;
  }
  return ifact;
}

int main()
{
  int iValue = 0 ;
  ULONG iRet = 0;

  printf("Enter number:\n");
  scanf("%lld",&iValue);

 iRet = Factorial(iValue);
 printf("Factorial is :%lld\n",iRet);

    return EXIT_SUCCESS;
}