#include <stdio.h>
#include <stdlib.h>

void CheckDivisible(int iNo)
{
  if(((iNo%5) ==0) && ((iNo%3)==0))
  {
    printf("Number is divisible by 3 and 5");
  }
  else
  {
     printf("Number is not Divisible by 3 and 5");
  }
}

int main()
{
  int iValue = 0;

  printf("Enter number:\n");
  scanf("%d",&iValue);
CheckDivisible(iValue);
    return EXIT_SUCCESS;
}