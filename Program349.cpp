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

Number *number1 = new Number(5);
Number *number2 = new Number(7);



  return EXIT_SUCCESS;
}