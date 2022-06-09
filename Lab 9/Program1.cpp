//WAP to demonstrate an example of unary operator overloading using friend’s function.
#include <iostream>
using namespace std;
class number
{
      private:
      int a,b;
      public:
      void accept()
      {
            cout<<"Enter the value of a: ";
            cin>>a;
            cout<<"Enter the value of b: ";
            cin>>b;
      }
      void operator --()
      {
            a--;
            b--;
      }
      void operator ++()
      {
            a++;
            b++;
      }
      void display()
      {
            cout<<"A: "<<a<<endl;
            cout<<"B: "<<b<<endl;
      }
};

int main()
{
      number n1;
      n1.accept();
      --n1;
      cout<<"\n After decrementing : \n";
      n1.display();

      ++n1;
      cout<<"\n After Incrementing : \n";
      n1.display();

      return 0;
}