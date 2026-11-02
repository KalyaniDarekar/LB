#include <iostream>
 using namespace std;
 class Arithmetic 
 {

    public:
    float no1;
    float no2;
    Arithmetic(float a,float b)
    {
        no1 = a;
        no2 = b;

    }
    float Addition()
    {
        float Ans;
        Ans = no1+no2;
        return Ans ;

    }
 };
 int main ()
 {
    Arithmetic aobj1(10.5f,11.5f);
     Arithmetic aobj2(20.6f,21.6f);
    cout<<aobj1.Addition()<<"\n";
     cout<<aobj2.Addition()<<"\n";

    return EXIT_SUCCESS;
 }