//Input :5
// 15

//Input:8
// 36

#include <stdio.h>
#include <stdlib.h>


int main()
{
   int iCnt = 0;
   int iSum = 0;
   iCnt = 1;//1
   //iSum = 0+1;  --> 1
  iSum = iSum + iCnt;
  iCnt++;  //2
   iSum = iSum + iCnt;
    //iSum = 1+2;  --> 3
  iCnt++;//3
   iSum = iSum + iCnt;
   //iSum = 3+3;  --> 6
  iCnt++;//4
   iSum = iSum + iCnt;
   //iSum = 6+4;  --> 10
  iCnt++;//5
  

  printf("%d\n",iSum);
    return EXIT_SUCCESS;
}