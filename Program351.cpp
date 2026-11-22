#include <iostream>
using namespace std;


class Number
{
    public:
    int *Arr;
    int iLength;

    Number(int iSize)
    {
      cout<<"Inside Constructor\n";
      this->iLength = iSize;
      this->Arr = new int [iLength];
    }
    ~Number()
    {
       cout<<"Inside Destructor\n";
      delete [] this ->Arr;

    }
    void Accept()
    {
      int iCnt = 0;
      cout<<"Enter the Elements: \n";
    for (iCnt = 0 ; iCnt< iLength; iCnt++)
    {
      cin>>Arr[iCnt];
    }
      
    }
     void Display()
    {
      int iCnt = 0;
      cout<<" Elements of the array are: \n";
    for (iCnt = 0 ; iCnt< iLength; iCnt++)
    {
      cout<<Arr[iCnt]<<endl;
    }
      
    }
};

int main ()
{
// step 1 - allocate memory 
Number *number1 = new Number(5);


// step 2- use the memory
number1 ->Accept();
number1 ->Display();

 // step3- deallocate the memory 
delete number1;


  return EXIT_SUCCESS;
}