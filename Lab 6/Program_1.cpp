// Write a c++ program to demonstrate example of simple inheritance.
#include <iostream>
using namespace std;

class number
{
      protected:
      int x;
      public:
      void get()
      {
            cout<<"Enter the value of x: ";
            cin>>x;
      }
};
class operation : public number
{
      private:
      int y;
      public:
      void get1()
      {
            cout<<"Enter the value of y: ";
            cin>>y;
      }
      void product()
      {
            cout<<"Product of "<<x<<" and "<<y<<" is : "<<x*y<<endl;
      }
      void sum()
      {
            cout<<"Sum of "<<x<<" and "<<y<<" is : "<<x+y<<endl;
      }

};
int main()
{
      operation o1;
      o1.get();
      o1.get1();
      o1.product();
      o1.sum();

      return 0;
}