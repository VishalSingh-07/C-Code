#include <iostream>
using namespace std;

class base
{
      public:
      void show()
      {
            cout<<"Show from base";
      }

};
class derived:public base
{
      public:
      void show()
      {
            cout<<"Show from derived";
      }

};
int main()
{
      base *p;
      derived obj1;

      p=&obj1;
      p->show();

      return 0;
}