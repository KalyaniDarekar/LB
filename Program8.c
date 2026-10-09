/*
Step 1 : Understand the program statement
Step 2 : Write the algorithm
Step 3 : Decide the programming language
Step 4 : Write the program
Step 5 : Test the program
*/

//////////////////////////////////////////////////////////////////
// Step 1 : Understand the program statement
// User is going to enter any 2 integers and we have to perform addition
//////////////////////////////////////////////////////////////////

// Step 2 : Write the algorithm
/*
START
Accept the first number as NO1
Accept the second number as NO2
Create a variable as ans to store the result
Perform the addition and store it into ans
Display the result from ans
END
*/

// Step 3 : Decide the programming language
// We select C programming
//////////////////////////////////////////////////////////////////

// Step 4 : Write the program
//////////////////////////////////////////////////////////////////

#include <stdio.h>

/////////////////////////////////////////////////////////////////////
// Function Name    : Addition
// Input            : Integer, Integer
// Output           : Integer
// Description      : Performs addition
// Date             : 04/10/2026
// Author           : Kalyani Rajendra Darekar
/////////////////////////////////////////////////////////////////////

int Addition(int iNO1, int iNO2)
{
int iAns = 0;

iAns = iNO1 + iNO2;  // Business logic

return iAns;

}

/////////////////////////////////////////////////////////////////////
// Entry point of the application
/////////////////////////////////////////////////////////////////////

int main()
{
int iValue1 = 0, iValue2 = 0, iResult = 0;

printf("Enter First Number:\n");
scanf("%d", &iValue1);

printf("Enter Second Number:\n");
scanf("%d", &iValue2);

iResult = Addition(iValue1, iValue2);

printf("Addition is: %d\n", iResult);

return 0;

}

/////////////////////////////////////////////////////////////////////
// Step 5 : Test the program
// Tested test cases
//
// Input1       Input2       Output
//  10            11           21
//  11             0           11
//   0            11           11
//  20            -9           11
//  -9            20           11
// -20           -11          -31
//
/////////////////////////////////////////////////////////////////////
