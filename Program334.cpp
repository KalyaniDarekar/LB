#include <iostream>
using namespace std;

int main ()
{
int *ptr = NULL;
int iSize = 0;
cout<<"Enter Number of Elements : \n";
cin>>iSize;
// step1 - allocate the memory 
ptr = new int[iSize];

//use the memory 


//free the momory
delete [] ptr; // free(ptr);


  return EXIT_SUCCESS;
}