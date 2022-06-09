#include <iostream>
using namespace std;

class alpha
{
      private:
      int data;
      public:
      alpha() // no-argument constructor
      {

      }
      alpha(int d) // one argument constructor
      {
            data=d;
      }
      alpha(alpha &a) // copy constructor
      {
            data=a.data;
            cout<<"\n Copy Constructor invoked";
      }
      void display()
      {
            cout<<data;
      }

};

int main()
{
      alpha a1(5);
      alpha a2(a1);
      a1.display();
      a2.display();


      return 0;
}