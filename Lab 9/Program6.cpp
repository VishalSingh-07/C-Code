// Write a C++ Program for function overriding
#include <iostream>
using namespace std;
class base
{
      public:
      virtual void print()
      {
            cout<<"Print Base Class"<<endl;
      }
      void show()
      {
            cout<<"Show Base class"<<endl;
      }
};
class derived:public base
{
      public:
      void print()
      {
            cout<<"Print Derived Class"<<endl;
      }
      void show()
      {
            cout<<"Show Derived Class"<<endl;
      }

};
int main()
{
      base *ptr;
      derived d;
      ptr=&d;
      ptr->print(); // Virtual Function
      ptr->show();  // Non-Virtual Function

      return 0;
}
