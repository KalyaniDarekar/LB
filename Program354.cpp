#include <iostream>
using namespace std;


class Number
{
    private:
    int *Arr;
    int iLength;

    public:

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
    int Summation()
    {
      int iCnt = 0;
       int iSum = 0;
   
      for(iCnt = 0; iCnt<iLength; iCnt++)
      {
        iSum= iSum+ (Arr[iCnt]);
      }
      return iSum;
    }
    float Average()
    {
      int iCnt = 0;
      int iSum = 0;
     
      for(iCnt = 0; iCnt<iLength; iCnt++)
      {
        iSum= iSum+ (Arr[iCnt]);
      }
      return (float)iSum/ (float)iLength;
    }
};

int main ()
{
  int iSize = 0;
  int iRet = 0;
  float fRet = 0.0f;


  cout<<"Enter Number of Elements:\n";
  cin>>iSize;
// step 1 - allocate memory 
Number *number1 = new Number(iSize);

// step 2- use the memory
number1 ->Accept();
number1 ->Display();
iRet = number1 ->Summation();
  cout<<"Addition is :"<<iRet<<endl;
fRet = number1 ->Average(); 
  cout<<"Average is :"<<fRet<<endl;

 // step3- deallocate the memory 
delete number1;


  return EXIT_SUCCESS;
}