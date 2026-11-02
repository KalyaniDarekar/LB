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
    Arithmetic aobj1(10,11);
     Arithmetic aobj2(20,21);
    cout<<aobj1.Addition()<<"\n";
     cout<<aobj2.Addition()<<"\n";

    return EXIT_SUCCESS;
 }