// Write a C++ Program to demonstrate example of protected simple inheritance
#include <iostream>
using namespace std;
class shape
{
      protected:
      float r;
      public:
      void values()
      {
            cout<<"Enter the value of radius: ";
            cin>>r;
      }

};
class circle:protected shape
{
      private:
      float perimeter;
      public:
      void perimeter_circle()
      {
            values();
            perimeter=2*3.14*r;

      }
      void display()
      {
            cout<<"Perimeter of Circle is : "<<perimeter<<endl;
      }

};
int main()
{
      circle c1;
      c1.perimeter_circle();
      c1.display();
      return 0;
}
































// #include <iostream>
// using namespace std;

// class A
// {
//       protected:
//       int x;
//       public:
//       A()
//       {
//             cout<<"Inside A"<<endl;
//       }
//       void func(int a)
//       {
//             x=a;
//       }

// };
// class B: protected A
// {
//       private:
//       int y;
      
//       public:
//       B()
//       {
//             cout<<"Inside B"<<endl;
//             func(15);
//             cout<<"The value of x is : "<<x<<endl;
//       }



// };
// int main()
// {
//       A A1;
//       B B1;
      

//       return 0;
// }
