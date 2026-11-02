#include <iostream>
 using namespace std;
 class Arithmetic 
 {

    public:
    double no1;
    double no2;
    Arithmetic(double a,double b)
    {
        no1 = a;
        no2 = b;

    }
    double Addition()
    {
        double Ans;
        Ans = no1+no2;
        return Ans ;

    }
    double Substraction()
    {
        double Ans;
        Ans = no1-no2;
        return Ans ;

    }
 };
 int main ()
 {
    Arithmetic aobj1(10.5,11.5);
     Arithmetic aobj2(20.6,21.6);
    cout<<aobj1.Addition()<<"\n";
     cout<<aobj2.Addition()<<"\n";
     cout<<aobj1.Substraction()<<"\n";
     cout<<aobj2.Substraction()<<"\n";

    return EXIT_SUCCESS;
 }