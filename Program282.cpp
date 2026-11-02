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
     Arithmetic *aobj = new Arithmetic(11,10);
    cout<<aobj->Addition()<<endl;


    return EXIT_SUCCESS;
 }