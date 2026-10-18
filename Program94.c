 #include <stdio.h>  
#include <stdlib.h>

long long Factorial(int iNo)
{
  int iCnt = 0;
  long long ifact = 0;
  
  for(iCnt = 1 ,ifact = 1 ; iCnt <= iNo; iCnt++)
  {
    ifact = ifact * iCnt;
  }
  return ifact;
}

int main()
{
  int iValue = 0 ;
  long long iRet = 0;

  printf("Enter number:\n");
  scanf("%lld",&iValue);

 iRet = Factorial(iValue);
 printf("Factorial is :%lld\n",iRet);

    return EXIT_SUCCESS;
}