// WAP to implement function overloading.
#include <iostream>
using namespace std;
class multiplication
{
      private:
      int a,b,c;
      public:
      void mul(int a,int b)
      {
            cout<<"Product of two number a and b is: "<<a*b<<endl;
      }
      void mul(int a,int b, int c)
      {
            cout<<"Product of three number a, b and c is: "<<a*b*c<<endl;
      }
      void mul(char d,char e)
      {
            cout<<"Product of ASCII value of a and b= "<<d*e<<endl;
      }
    
};
int main()
{
      multiplication m1;
      m1.mul(10,20);
      m1.mul(10,50,80);
      m1.mul('a','b');

      

      return 0;

}