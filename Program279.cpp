#include <iostream>
 using namespace std;
 template<class T>
 class Arithmetic 
 {

    public:
    double no1;
    double no2;
    Arithmetic(T a,T b)
    {
       T no1 = a;
       T no2 = b;

    }
    T Addition()
    {
        double Ans;
        Ans = no1+no2;
        return Ans ;

    }
    T Substraction()
    {
        double Ans;
        Ans = no1-no2;
        return Ans ;

    }
 };
 int main ()
 {
    
    
   Arithmetic aobj1(10.5,11.5);
     
    cout<<aobj1.Addition()<<"\n";
    cout<<aobj1.Substraction()<<"\n";
     
    
    return EXIT_SUCCESS;
 }