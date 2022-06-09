#include <iostream>
using namespace std;
class alpha
{
      private:
      int data1;
      public:
      alpha()
      {
            data1=7;
      }
      void fun(beta b)
      {
            cout<<b.data2;
      }
      friend class beta;
};
class beta
{
      private:
      int data2;
      voidfunc1(alpha a)
      {
            cout<<"\n Data 1= "<<a.data1;
      }
      void func2(alpha a)
      {
            cout<<"\n data2="<<a.data1; 
      }
}
