#include <iostream>
 using namespace std;
 template<class T>
 class Arithmetic 
 {

    public:
    T no1;
    T no2;

    Arithmetic(T a,T b);
    T Addition();
    T Substraction();
 };
 template<class T>
Arithmetic <T>:: Arithmetic(T a,T b)  
{
   no1 = a;
   no2 = b;

}
template<class T>
T Arithmetic <T>:: Addition() 
{
   T Ans;
   Ans = no1+no2;
   return Ans ;

}
template<class T>
T Arithmetic <T>:: Substraction()
{
   T Ans;
   Ans = no1-no2;
   return Ans ;

}
 int main ()
 {
    
   Arithmetic <int> *aobj = new Arithmetic <int> (11,10);  //Error solved
   cout<<aobj->Addition()<<endl;
   delete aobj; // Free the allocated memory
     
    return EXIT_SUCCESS;
 }