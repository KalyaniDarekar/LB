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
       no1 = a;
       no2 = b;

    }
    T Addition()
    {
        T Ans;
        Ans = no1+no2;
        return Ans ;

    }
    T Substraction()
    {
        T Ans;
        Ans = no1-no2;
        return Ans ;

    }
 };
 int main ()
 {
    
    
   Arithmetic <double> aobj1(10.5,11.5); // error
     
    cout<<aobj1.Addition()<<"\n";
    cout<<aobj1.Substraction()<<"\n";
     
    
    return EXIT_SUCCESS;
 }