// WAP to demonstrate static variable in a class.
#include<iostream>
using namespace std;
class A
{
  int x;
  int y;
  static int z;
  public:
  A()
  { 
    x=0;
    y=0;
    z++;
  }
  void f1()
  { 
    cout<<z<<endl;
  }
};
int A::z=0;
int main()
{
  A a1,a2,a3;
  a1.f1();
  a2.f1();
  a3.f1();
  return 0;
}

