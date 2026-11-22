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
};

int main ()
{
// step 1 - allocate memory 
Number *number1 = new Number(5);
Number *number2 = new Number(7);

// step 2- use the memory


 // step3- deallocate the memory 
delete number1;
delete number2;


  return EXIT_SUCCESS;
}