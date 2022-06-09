#include <iostream>
using namespace std;

class A //base
{
      private: 
      int x;  // accessible to A only

      protected:
      int y; // A and B

      public:
      int z; // A and B and anywhere
      void func()
      {
            cout<<x<<y<<z;
      }

};

class B: public A     //derived
{
      private:
      int a1;
      protected:
      int b1;
      public:
      int c1;
      void B_func()
      {
            cout<<a1<<b1<<c1;
            cout<<y<<z;

            func();
      }
};
int main()
{
      A a11;
      B b11;
      // a11.x=6; // error
      // a11.y=7; // error
      a11.z=8;
      // a11.a1=1; // error
      // a11.b1=2; // error
      // a11.c1=3; // error
      a11.func();
      // a11.B_func(); // error
      // b11.x=6; // error
      // b11.y=7; // error
      b11.z=8;
      // b11.a1=1; // error
      // b11.b1=2; // error
      b11.c1=3;
      b11.func();
      b11.B_func();

      return 0;
}
