#include <iostream>
using namespace std;

int main ()
{
int *ptr = NULL;
int iSize = 0;
int iCnt= 0;
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


//free the momory
delete [] ptr; // free(ptr);


  return EXIT_SUCCESS;
}