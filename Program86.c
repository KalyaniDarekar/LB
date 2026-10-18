/*
------------------------------------------
               Operation  ||
------------------------------------------              
 result1       result2     final result
 ----------------------------------------
  True          True          true // short circuit
  True          False         true  // short circuit
  False         True          true  
  False         False         False 
 ----------------------------------------
*/



#include <stdio.h>
#include <stdlib.h>

void CheckDivisible(int iNo)
{
  if(((iNo%5) ==0) || ((iNo%3)==0)) 
  {
    printf("Number is divisible ");
  }
  else
  {
     printf("Number is not Divisible ");
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