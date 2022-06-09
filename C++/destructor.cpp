#include <iostream>
using namespace std;

class A
{
      private:
      int x;
      public:

      A()
      {
            x=0;
            cout<<"Calling Constructors"<<endl;
      }
      ~A()
      {
            cout<<"Calling Destructor"<<endl;
            cout<<"this"<<endl;
      }


};
int  main()
{
      A a1,a2,a3;


      return 0;
}
