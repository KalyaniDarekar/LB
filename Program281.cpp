#include <iostream>
 using namespace std;
 template<class T>
 class Arithmetic 
 {

    public:
    T no1;
    T no2;
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
    
    
   Arithmetic <int> aobj1(10,11); // error
   Arithmetic <float> aobj2(10.5f,11.5f); // error
     
    cout<<aobj1.Addition()<<"\n";
    cout<<aobj2.Addition()<<"\n";
    
     
    return EXIT_SUCCESS;
 }