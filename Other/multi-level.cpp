#include <iostream>
using namespace std;

class A
{
      public:
      A()
      {
            cout<<"Inside A"<<endl;
      }

      A(int c)
      {
            cout<<c<<endl;
      }
};

class B : public A
{
      public:
      B():A()
      {
            cout<<"Inside B"<<endl;
      }
      B(int d):A(d)
      {
            cout<<d+50;
      }
};

class C: public B
{
      public:
      C():B()
      {
            cout<<"Inside C"<<endl;
      }

};

int main()
{
      A a1;
      cout<<"Class B"<<endl;
      B b1, b2(50);
      cout<<"\n Class C"<<endl;
      C c1;


      return 0;
}
