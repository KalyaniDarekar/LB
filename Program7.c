/*
Step 1 : understand the program statement
Step 2 :write the algorithm
Step 3 :decide the programming language 
Step 4 :write the program
Step 5 :test the program 
*/

//////////////////////////////////////////////////////////////////
//  step1 :understand the program statement user is goint to 
//   enter  
//
/////////////////////////////////////////////////////////////////
// step 2 : write the algorithm
/*
START
accept the first no as NO1
accept the first no as NO2
create the variable as ans to store the result 
perform the addition and store into ans 
display the result from ans 
END
*/
//
///////////////////////////////////////////////////////////////
//  step 3 : decide the programming language
//   we select c programming
//
/////////////////////////////////////////////////////////////
//
//Step 4 :write the program
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>
/////////////////////////////////////////////////////////////////////
// Function Name    :      Addition
// Input            :      Integer,Integer 
// output           :      Integer 
// description      :      performs addition 
// date             :      04/10/2026
// author           :      Kalyani Rajendra Darekar  
///////////////////////////////////////////////////////////////////

int Addition(int iNO1, int iNO2)
{
    int iAns = 0;

    iAns = iNO1 + iNO2; //business logic 

    return iAns;
}
///////////////////////////////////////////////////////////////////
// 
// Entry point of the application 
//
///////////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter First Number : \n");
    scanf("%d", &iValue1);

    printf("Enter Second Number : \n");
    scanf("%d", &iValue2);

    iResult = Addition(iValue1, iValue2);

    printf("Addition is : %d\n", iResult);

    return 0;
}