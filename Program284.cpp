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
    
   Arithmetic <int> *aobj = new Arithmetic <int> (11,10);  //Error solved
   cout<<aobj->Addition()<<endl;
     
    return EXIT_SUCCESS;
 }