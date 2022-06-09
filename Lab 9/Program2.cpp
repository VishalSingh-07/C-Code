//WAP to demonstrate an example of unary operator overloading.
#include <iostream>
using namespace std;
class weight
{
      private:
      int kg;
      public:
      weight()
      {
            kg=0;
      }
      weight(int x)
      {
            kg=x;
      }
      void operator ++()
      {
            ++kg;
      }
      void operator ++(int)
      {
            kg++;
      }
      void operator --()
      {
            --kg;
      }
      void operator --(int)
      {
            kg--;
      }
      void display()
      {
            cout<<"Weight in KG: "<<kg<<endl;
      }

};
int main()
{
      weight w1;
      ++w1;
      cout<<"\n After Pre-increment:\n ";
      w1.display();
      w1++;
      cout<<"\n After Post-increment: \n";
      w1.display();
      --w1;
      cout<<"\n After Pre-decrement:\n ";
      w1.display();
      w1--;
      cout<<"\n After Post-decrement: \n";
      w1.display();

      return 0;
}