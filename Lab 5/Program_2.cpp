// Write a C++ Program to demonstrate example of private simple inheritance
#include <iostream>
using namespace std;

class A
{
      protected:
      int x;
      public:
      A()
      {
            cout<<"Inside A"<<endl;
      }
      void func(int a)
      {
            x=a;
      }

};
class B: private A
{
      private:
      int y;
      
      public:
      B()
      {
            cout<<"Inside B"<<endl;
            func(15);
            cout<<"The value of x is : "<<x<<endl;
      }



};
int main()
{
      A A1;
      B B1;
      

      return 0;
}
