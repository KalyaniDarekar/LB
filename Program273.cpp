#include <iostream>
 using namespace std;
 class Arithmetic 
 {

    public:
    int no1;
    int no2;
    Arithmetic(int a,int b)
    {
        no1 = a;
        no2 = b;

    }
    int Addition()
    {
        int Ans;
        Ans = no1+no2;
        return Ans ;

    }
 };
 int main ()
 {
    Arithmetic aobj(10,11);
    cout<<aobj.Addition()<<"\n";

    return EXIT_SUCCESS;
 }