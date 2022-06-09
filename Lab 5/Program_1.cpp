// Write a C++ Program to demonstrate example of simple inheritance
#include <iostream>
using namespace std;

class A
{
      int x;
      public:
      A()
      {
            cout<<"Inside A"<<endl;
      }

};
class B: public A
{
      int i;
      int y;
      public:
      B()
      {
            cout<<"Inside B"<<endl;
      }

      B(int j)
      {
            i=j;
            cout<<"The value of i is : "<<i<<endl;
            
      }


};
int main()
{
      A a;
      B B1;
      B B2(5);

      return 0;
}
