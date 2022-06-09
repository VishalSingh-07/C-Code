#include <iostream>
using namespace std;
class A
{

      public:
      static int count;
      int x;

      A()
      {
          x=0;
      }
      static void fun()
      {
            cout<<count;
      }
      void funny()
      {
            cout<<count;
      }
};

int A::count=0;  //initialize static variable

void main()
{
      cout<<A::count;
      
      A a1;
      a1.x=5;
      cout<<a1.count;
      A::fun();

} 