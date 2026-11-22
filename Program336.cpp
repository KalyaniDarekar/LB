#include <iostream>
using namespace std;
int Summation(int Arr[],int iLength)  // addres , value
{
    int iCnt = 0;
    int iSum = 0;


    for (iCnt =0 ; iCnt<iLength; iCnt++ )
    {
      iSum = iSum +Arr[iCnt];

    }
    return iSum;
 
}
float Average(int Arr[],int iLength)  // addres , value
{
    int iCnt = 0;
    int iSum = 0;


    for (iCnt =0 ; iCnt<iLength; iCnt++ )
    {
      iSum = iSum +Arr[iCnt];

    }
    return((float)iSum/(float)iLength);
 
}
int main ()
{
int *ptr = NULL;
int iSize = 0;
int iCnt= 0;
int iRet = 0;
float fRet = 0;

cout<<"Enter Number of Elements : \n";
cin>>iSize;
// step1 - allocate the memory 
ptr = new int[iSize];

//use the memory 
cout<<"Enter the Elements:\n";
for (iCnt = 0; iCnt<iSize ; iCnt++)
{
  cin>>ptr[iCnt];
}
cout<<"Elements of the array are :\n";
for (iCnt = 0; iCnt<iSize ; iCnt++)
{
  cout<<ptr[iCnt]<<endl;
}

iRet = Summation( ptr ,iSize);
cout<<"Addition of element"<<iRet<<endl;

fRet = Average( ptr ,iSize);
cout<<"Average of all elements"<<fRet<<endl;

//free the momory
delete [] ptr; // free(ptr);


  return EXIT_SUCCESS;
}